#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i;
	//printf("n을 입력하시오: ");
	scanf("%d", &n);
	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}