/*
#include <stdio.h>
int selfnum(int num) {
	int sum = num;
	while (num != 0){
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	char arr[10001] = { 0 };
	int i = 1, cnt;
	for (int i = 1; i < 10001; i++) {
		cnt = selfnum(i);
		if (cnt < 10001)
			arr[cnt] = 1;
	}
	for (i = 1; i < 10001; i++) {
		if (!arr[i]) printf("%d\n", i);
	}
}
*/