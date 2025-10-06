#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);

	for (int i = 1; i <= n; i++) {
		int value;
		scanf("%d",&value);

		int max = value;

		while (value != 1) {
			if (value % 2 == 0) {
				value /= 2;
			}
			else {
				value = value * 3 + 1;
			}
			if (max < value) {
				max = value;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}