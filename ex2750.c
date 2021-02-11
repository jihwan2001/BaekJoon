/*
#include <stdio.h>
int main() {
	int N, num[1024] = { 0 }, tmp = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
		scanf_s("%d", &num[i]);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (num[i] < num[j]) {
				tmp = num[i];
				for (int k = i; k >= j; k--) {
					num[k] = num[k - 1];
				}
				num[j] = tmp;
				break;
			}
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d", num[i]);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, tmp;
	int* arr;
	scanf_s("%d", &N);
	arr = (int*)calloc(N, sizeof(int));
	for (int i = 0; i < N; i++)
		scanf_s("%d", &arr[i]);
	for (int i = 0; i < N; i++) 
		for (int j = i + 1; j < N; j++) 
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			
	
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	free(arr);
}
*/