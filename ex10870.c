/*
for문사용
#include <stdio.h>
int main() {
	int a = 0, b = 1, c;
	int n;
	scanf_s("%d", &n);
	if (n < 2) {
		if (n == 0)
			printf("0");
		else
			printf("1");
	}
	else {
		for (int i = 1; i < n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d\n", c);
	}
}

재귀함수 사용
#include <stdio.h>
int fibo(int n) {
	if (n > 1)
		return fibo(n - 1) + fibo(n - 2);
	else
		return n;
}
int main() {
	int N;
	scanf_s("%d", &N);
	printf("%d\n", fibo(N));
}
*/