
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "password.h"

#define HISTORY_FILE "history.txt"

typedef int (*rule_fn)(const char*);

static int rule_length(const char *s);
static int rule_digits(const char *s);
static int rule_special(const char *s);
static int rule_case(const char *s);

static rule_fn rules[] = {
    rule_length,
    rule_digits,
    rule_special,
    rule_case
};
static const int rule_count = sizeof(rules)/sizeof(rules[0]);

void trim_newline(char *s) {
    size_t n = strlen(s);
    if (n == 0) return;
    if (s[n-1] == '\n') s[n-1] = '\0';
}

int evaluate_password(const char *pwd) {
    int total = 0;
    for (int i = 0; i < rule_count; i++)
        total += rules[i](pwd);
    return total;
}

void print_result(const char *pwd, int score) {
    printf("\nPassword: '%s'\n", pwd);
    printf("Score: %d\n", score);

    if (score < 2) printf("Result: WEAK\n");
    else if (score < 4) printf("Result: MEDIUM\n");
    else printf("Result: STRONG\n");
}

void append_history(const char *pwd, int score) {
    FILE *f = fopen(HISTORY_FILE, "a");
    if (!f) return;

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char timebuf[64];
    strftime(timebuf, sizeof(timebuf), "%Y-%m-%d %H:%M:%S", tm);

    fprintf(f, "%s | %s | %d\n", timebuf, pwd, score);
    fclose(f);
}

void show_history() {
    FILE *f = fopen(HISTORY_FILE, "r");
    if (!f) {
        printf("History empty.\n");
        return;
    }
    char line[256];
    printf("\n=== HISTORY ===\n");
    while (fgets(line, sizeof(line), f))
        printf("%s", line);
    fclose(f);
}

static int rule_length(const char *s) {
    int n = strlen(s);
    if (n >= 10) return 2;
    if (n >= 6) return 1;
    return 0;
}

static int rule_digits(const char *s) {
    for (int i = 0; s[i]; i++)
        if (isdigit((unsigned char)s[i])) return 1;
    return 0;
}

static int rule_special(const char *s) {
    const char *spec = "!@#$%^&*()_+=-";
    for (int i = 0; s[i]; i++)
        if (strchr(spec, s[i])) return 1;
    return 0;
}

static int rule_case(const char *s) {
    int upper = 0, lower = 0;
    for (int i = 0; s[i]; i++) {
        if (isupper((unsigned char)s[i])) upper = 1;
        if (islower((unsigned char)s[i])) lower = 1;
    }
    return (upper && lower) ? 1 : 0;
}
