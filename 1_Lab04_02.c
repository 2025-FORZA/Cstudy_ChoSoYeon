#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t, a, b;
    printf("케이스 개수: ");
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        printf("a: ");
        scanf("%d", &a);
        printf("b: ");
        scanf("%d", &b);
        printf("%d\n", a + b);
    }

    return 0;
}
