/*
#include <stdio.h>
#define size 10001
int main() {
	int T, N,i,j;
	int arr[size] = { 0, };
	for (j = 2; j < size/j; j++) {
		if (!arr[j]) {
			for ( i = j * j; i < size; i += j)
				if (i % j == 0)arr[i] = 1;
		}
	}
	scanf_s("%d", &T);
	while (T--) {
		scanf_s("%d", &N);
		for (i = N / 2; i > 1; i--) {
			if (arr[i] == 1) continue;
			for (j = N / 2; j <= N; j++) {
				if (arr[j] == 1)continue;
				if (i + j == N)goto out;
			}
		}
	out: printf("%d %d\n", i, j);
	}
	return 0;
}
*/