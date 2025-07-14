#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;  
    scanf("%d", &n);  

    int num;
    int min, max;


    scanf("%d", &num);
    min = max = num;

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}