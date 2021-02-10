/*
#include <stdio.h>
int main() {
	int N;
	int x[50] = { 0 }, y[50] = { 0 };
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d %d", &x[i], &y[i]);
	}
	for (int i = 0; i < N; i++) {
		int k = 0;
		for (int j = 0; j < N; j++) {
			if (x[i] < x[j] && y[i] < y[j])
				k++;
		}
		printf("%d\n", k + 1 );
	}
}
*/