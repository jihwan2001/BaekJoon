/*
#include <stdio.h>
int main() {
	int N, n, cnt=0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &n);
		for (int i = 2; i <= n; i++) {
			if (n == i)
				cnt++;
			if (n % i == 0)
				break;
		}
	}
	printf("%d\n", cnt);
}
*/