/*
for문 사용
#include<stdio.h>
int main() {
	int n, gop=1;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		gop *= i;
	}
	printf("%d", gop);
}

재귀함수 사용
#include <stdio.h>
int fac(int n) {
	if (n > 1)return n * fac(n - 1);
	else if (n == 0) return 1;
	else return n;
}
int main() {
	int N;
	scanf_s("%d", &N);
	printf("%d\n", fac(N));
}
*/