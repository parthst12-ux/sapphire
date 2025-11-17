
#ifndef PASSWORD_H
#define PASSWORD_H

int evaluate_password(const char *pwd);
void print_result(const char *pwd, int score);
void append_history(const char *pwd, int score);
void show_history(void);
void trim_newline(char *s);

#endif
