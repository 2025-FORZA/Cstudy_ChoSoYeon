//2563
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size[100][100] = { 0 };
	int area = 0;
	int n;
	scanf("%d", &n);

	for (int k = 0; k < n; k++) {
		int x, y;
		scanf("%d %d", &x, &y);


	for (int i = x; i < x + 10; i++) {
		for (int j = y; j < y + 10; j++) {
			size[i][j] = 1;
		}
	}
}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (size[i][j] == 1) {
				area++;
			}
		}
	}
	printf("%d\n", area);
	return 0;
}