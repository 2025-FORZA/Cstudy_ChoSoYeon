//1193
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n,x;
	int k = 1;
	scanf("%d", &n);
	
	while (1) {
		if (k * (k - 1) / 2 < n && n <= k * (k + 1) / 2)break;
		k++;
	}
			if ((k % 2) != 0) {
			x = (k * (k + 1) / 2-n);
			printf("%d/%d",1+x,k-x);

		}
		if ((k % 2) == 0) {
			x = k*(k+1)/2-n;
			printf("%d/%d", k - x, 1 + x);
		}
	return 0;
}
