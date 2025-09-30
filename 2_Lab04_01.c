#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[81], b[81], result[82];
    int i, j, k, carry = 0;

    scanf("%s %s", a, b);

    for (i = 0; a[i] != '\0'; i++);
    for (j = 0; b[j] != '\0'; j++);
    i--; j--;

    k = (i > j ? i : j) + 1;
    result[k + 1] = '\0';

    while (i >= 0 || j >= 0 || carry > 0) {
        int bitA = (i >= 0) ? a[i] - '0' : 0;
        int bitB = (j >= 0) ? b[j] - '0' : 0;
        int sum = bitA + bitB + carry;

        result[k] = (sum % 2) + '0';
        carry = sum / 2;

        i--; j--; k--;
    }

    int start = 0;
    while (result[start] == '0' && result[start + 1] != '\0') start++;

    printf("%s\n", result + start);
    return 0;
}
