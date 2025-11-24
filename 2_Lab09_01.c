#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    char s[55];

    for (int i = 0; i < n; i++) {

        scanf("%s", s);

        printf("String #%d\n", i + 1);

        for (int j = 0; s[j] != '\0'; j++) {

            if (s[j] == 'Z')

                putchar('A');

            else

                putchar(s[j] + 1);

        }

        printf("\n");

        if (i != n - 1)

            printf("\n");

    }

    return 0;

}

