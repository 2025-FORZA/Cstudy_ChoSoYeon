#include <stdio.h>

int main() {
    int arr[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        int sorted = 1;

        for (i = 0; i < 4; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                for (int j = 0; j < 5; j++) {
                    printf("%d ", arr[j]);
                }
                printf("\n");

                sorted = 0;
            }
        }

        if (sorted) break;
    }

    return 0;
}
