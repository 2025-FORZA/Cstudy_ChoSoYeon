#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int scores[1000];
    int max = 0;
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += (double)scores[i] / max * 100;
    }

    printf("%f\n", sum / n);

    return 0;
}
