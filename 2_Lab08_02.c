#include <stdio.h>

int main() {

    int num = 0;
    int divisors[51] = { 0 };
    long long N = 0;
    int i = 0;
    int min, max;

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        scanf("%d", &divisors[i]);
    }
    switch (num) {
    case 0:
        break;

    case 1:
        N = divisors[0] * divisors[0];
        printf("%d", N);
        break;

    default:
        min = max = divisors[0];

        for (int i = 0; i < num - 1; i++) {
            if (min > divisors[i + 1]) {
                min = divisors[i + 1];
            }
        }
        for (int i = 0; i < num - 1; i++) {
            if (max < divisors[i + 1]) {
                max = divisors[i + 1];
            }
        }
        N = min * max;
        printf("%lld", N);
        break;
    }
    return 0;
}