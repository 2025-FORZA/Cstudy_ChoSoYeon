#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long a, b, c;
	printf("a,b,c�� �Է��Ͻÿ�: ");
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", (a + b) % c);
	printf("%lld\n", ((a % c) + (b % c)) % c);
	printf("%lld\n", (a * b) % c);
	printf("%lld\n", ((a % c) * (b % c)) % c);

	return 0;
}