#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    int left[11];
    int line[11];
    int len = 0;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &left[i]);
    }

    for (int h = N; h >= 1; h--) {
        int pos = left[h];
        for (int j = len; j > pos; j--) {
            line[j] = line[j - 1];
        }
        line[pos] = h;
        len++;
    }

    for (int i = 0; i < N; i++) {
        printf("%d", line[i]);
        if (i != N - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
