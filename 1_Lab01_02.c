#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, sum;
	//printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d", sum);
	return 0;
}