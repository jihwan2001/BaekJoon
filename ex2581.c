/*
#include <stdio.h>
int main() {
	int M, N;
	int hap = 0, cnt = 0, first = 0;
	scanf_s("%d %d", &M, &N);
	for (int i = M; i <= N; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0)
				if (i == j) {
					hap += i;
					first++;
					if (first == 1)
						cnt = i;
					break;
				}
				else
					break;
		}
	}
	if (hap == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", hap, cnt);
}
*/