#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    int basket[101];

    for (int i = 1; i <= N; i++) {
        basket[i] = i;
    }

    for (int m = 0; m < M; m++) {
        int i, j;
        scanf("%d %d", &i, &j);

        while (i < j) {
            int temp = basket[i];
            basket[i] = basket[j];
            basket[j] = temp;
            i++;
            j--;
        }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}
