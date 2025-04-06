#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long a, b, c;
	//printf("a,b,c값을 입력하시오: ");
	scanf("%lld %lld %lld", &a, &b, &c);

	printf("%lld", a + b + c);
	return 0;
}