#include <stdio.h>

#define MAX 11  

int main(void) {
    int n;
    scanf("%d", &n);

    int pos[MAX];     
    int seen[MAX] = { 0 }; 
    int cnt = 0;      

    for (int i = 0; i < n; i++) {
        int cow, side;
        scanf("%d %d", &cow, &side);

        if (!seen[cow]) {
            pos[cow] = side;
            seen[cow] = 1;
        }
        else {
            if (pos[cow] != side) {
                cnt++;
                pos[cow] = side;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}
