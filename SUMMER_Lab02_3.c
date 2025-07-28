#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return num1 - num2;
}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}
