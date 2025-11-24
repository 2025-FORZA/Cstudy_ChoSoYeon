#include <stdio.h>
int N, M;
int check[50][50] = { 0, }, width[50] = { 0 }, length[50] = { 0 };
int count = 0;
char string[51][51];

void check_value() {
	for (int i = 0; i < N; i++)
		if (width[i] == 0) {
			count++;
		}

	for (int i = 0; i < M; i++)
		if (length[i] == 0) {
			count++;
		}
}

void cal() {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (width[i] == 0 && length[j] == 0) {
				string[i][j] = 'X';
				width[i] = length[j] = 1;
				count++;
			}
}

int main() {
	int value = 0, width_n = 0, length_n = 0, max;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", &string[i]);
		for (int j = 0; j < M; j++)
			if (string[i][j] == 'X') {
				width[i] = length[j] = 1;
			}
	}
	cal();
	check_value();
	printf("%d", count);
}