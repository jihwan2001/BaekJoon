/*
연습 1
#include <stdio.h>
int main() {
	int n, x=0;
	int arr[2000];
	scanf_s("%d", &n);
	scanf_s("%d", &x);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if(arr[i]<x)
			printf("%d ", arr[i]);
	}
}
*/
/*
연습 2
#include <stdio.h>
int main() {
	int n, x, a;
	scanf_s("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a);
		if (a < x) {
			printf("%d ", a);
		}
	}
	return 0;
}
*/
//실전
/*
#include <stdio.h>
int main() {
	int n, x, a;
	scanf_s("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a);
		if (a < x) {
			printf("%d ", a);
		}
	}
}
*/