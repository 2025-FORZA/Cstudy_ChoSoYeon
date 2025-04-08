#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int num1, num2, num3;
	printf("숫자를 입력하시오: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1==num2==num3) {
		printf("%d원", 10000 + num1 * 1000);
	}
	else if (num1==num2 || num1==num3 || num2==num3) {
		if (num1 == num2) {
			printf("%d원", 1000 + num1 * 100);
		}
		else if (num1 == num3) {
			printf("%d원", 1000 + num1 * 100);
		}
		else {
			printf("%d원", 1000 + num2 * 100);
		}
	}

	else {
		if (num1 > num2) {
			if (num1 < num3) {
				printf("%d원", num3 * 100);
			}
			else {
				printf("%d원", num1 * 100);
			}
		}

		else {
			if (num2 > num3) {
				printf("%d원", num2 * 100);
			}

			else { 
				printf("%d원", num3 * 100);
			}
	
		}
	}
	return 0;
}