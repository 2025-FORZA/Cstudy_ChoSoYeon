//1924
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char week[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    int today_day = 0;

    for (int i = 0; i < x - 1; i++) {
        today_day += day[i];
    }

    today_day += y;
    int weekday = today_day % 7;

    printf("%s\n", week[weekday]);
    return 0;
}