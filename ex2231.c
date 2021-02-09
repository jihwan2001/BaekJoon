/*
#include <stdio.h>
#include <math.h>
int main() {
	int N, M=0;
	int sum = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		sum = 0;
		for (int j = 9; j >= 0; j--)
			sum += (i / (int)pow(10, j) % 10);
		sum += i;
		if (sum == N) {
			M = i;
			break;
		}

	}
	printf("%d\n", M);
	return 0;
}

아래것이 더 빠름
#include <stdio.h>

int n, i, j, cnt, sum;

int main() {
	scanf_s("%d", &n);
	i = n;
	while (i) { 
		i /= 10;
		cnt++;
	}
	for (i = n - 9 * cnt; i < n; i++) {
		sum = i;
		for (j = i; j; j /= 10) sum += j % 10;
		if (sum == n) break;
	}
	printf("%d", i != n ? i : 0);
	return 0;
}
*/