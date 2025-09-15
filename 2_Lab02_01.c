#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size[101][101] = {0};
	int sum = 0;
	
	for (int i = 0; i <4; i++) {

		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);

		for (int x = a; x < c; x++) {
			for (int y = b; y < d; y++) {
				if (!size[x][y]) {
					size[x][y] = 1;
					sum++;
				}
			}
		}
	}
	

	printf("%d\n",sum);
	return 0;
}