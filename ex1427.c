/*
#include <stdio.h>
#include <string.h>
int main() {
	char N[11] = { NULL };
	int tmp;
	scanf_s("%s",N, sizeof(N));
	for (int i = 0; i < strlen(N) - 1; i++) {
		for (int j = i; j < strlen(N); j++) {
			if (N[i] < N[j]) {
				tmp = N[i];
				N[i] = N[j];
				N[j] = tmp;
			}
		}
	}
	printf("%s",N);
}
*/
/*
#include <stdio.h>
int main() {
	int N;
	int arr[10] = { 0 };
	scanf_s("%d", &N);
	while (N) {
		arr[N % 10]++;
		N /= 10;
	}
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < arr[i]; j++)
			printf("%d", i);
	}
}
*/