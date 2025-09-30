#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char words[5][16] = {0};//초기화 필수
    int i, j;

    for (i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }

    for (j = 0; j < 15; j++) {
        for (i = 0; i < 5; i++) {
            if (words[i][j] != '\0') {   
                printf("%c", words[i][j]);
            }
        }
    }

    return 0;
}
