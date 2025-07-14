#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    int col;         
    char code[201];  
    char real[201];  

    scanf("%d", &col);  
    scanf("%s", code);  

    int len = strlen(code);   
    int row = len / col;      
    int now = 0;               

    char box[20][200];        

    for (int c = 0; c < col; c++) {
        if (c % 2 == 0) {
            for (int r = 0; r < row; r++) {
                box[c][r] = code[now++];
            }
        } else {
            for (int r = row - 1; r >= 0; r--) {
                box[c][r] = code[now++];
            }
        }
    }

    int idx = 0;
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            real[idx++] = box[c][r];
        }
    }
    real[idx] = '\0'; 

    qsort(real, strlen(real), sizeof(char), compare);

    printf("%s\n", real);

    return 0;
}
