//11047
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, K;
	int coin[10];//�������� �Է� �޾ƾ���
	int sum=0;
	scanf("%d" "%d",&N, &K);//����
	
	for (int i = 0; i <N; i++) {
		scanf("%d",&coin[i]);
	}
	for(int i = N-1; i >= 0; i--) {
		if (K >= coin[i]) {
			sum += K / coin[i];
			K %= coin[i];
		}
	
	}
	printf("%d\n", sum);
	return 0;
}