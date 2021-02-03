/*
#include <stdio.h>
int main() {
	int M, N;
	int arr[1000] = { 0,1 };
	scanf_s("%d %d", &M, &N);
	for (int i = 2; i <= N; i++) {
		for (int j = 2; i * j <= N; j++)
			arr[i * j] = 1;
	}
	for (int i = M; i <= N; i++) {
		if(!arr[i])
			printf("%d\n", i);
	}
}
*/