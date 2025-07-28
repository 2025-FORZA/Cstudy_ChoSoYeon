#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);

        int floor, room;

        if (n % h == 0) {
            floor = h;
            room = n / h;
        }
        else {
            floor = n % h;
            room = n / h + 1;
        }

        printf("%d%02d\n", floor, room);
    }

    return 0;
}
