//17608
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	
	int n, arr[100001];
	int max = 0, cnt = 0;  

	scanf("%d", &n); 

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);  
	}

	for (int j = n - 1; j >= 0; j--) { 
		if (max < arr[j]) {
			max = arr[j];
			cnt++;
		}
	}
	printf("\n%d", cnt); 

	return 0;
}