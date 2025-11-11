//3047
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d",&arr[i]);
	}

	char abc[4];
	scanf("%s",abc);
	
	for (int i = 0; i < 2; i++) {
		for (int j = i+1; j < 3; j++) {
			if (arr[i]> arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		if (i > 0) printf(" ");
		switch (abc[i]) {
		case 'A': printf("%d",arr[0]);break;
		
		case 'B': printf("%d", arr[1]);break;

		case 'C': printf("%d", arr[2]);break;
		}
	}
	return 0;
}
