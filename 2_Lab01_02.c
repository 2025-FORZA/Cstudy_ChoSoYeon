//2903
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int point = 1;

	for (int i = 0; i < n; i++) {
		point *= 2;
	}
	int new_point = (point + 1) * (point + 1);

	printf("%d", new_point);
	return 0;
}