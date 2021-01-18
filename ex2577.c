/*
#include <stdio.h>
int main(){
	int A, B, C;
	int gop,num = 0;
	int arr[10] = { 0 };
	scanf_s("%d %d %d", &A, &B, &C);
	gop = A * B * C;
	while (gop > 0) {
		num = gop % 10;
		gop /= 10;
		arr[num]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/