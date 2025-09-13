#include <stdio.h>

// function to check leap year
int isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year, days = 0, dayIndex;
    char *week[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    printf("Enter year: ");
    scanf("%d", &year);

    // count total days from year 1 to year-1
    for(int i = 1; i < year; i++) {
        if(isLeap(i))
            days += 366;   // leap year has 366 days
        else
            days += 365;   // normal year has 365 days
    }

    // find day of week (0=Monday, 1=Tuesday, ...)
    dayIndex = days % 7;

    printf("On 01/01/%d, it was %s.\n", year, week[dayIndex]);

    return 0;
}
