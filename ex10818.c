/*
#include <stdio.h>
int main() {
	int N, max, min;
	max = 0; min = 0;
	int arr[1000]={0};
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < N; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d %d\n", min, max);
}
*/