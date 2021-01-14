/*
#include <stdio.h>
int main() {
	int N, new_N, tens, ones, cnt = 0;
	scanf_s("%d", &new_N);
	N = new_N;
	while (1) {
		tens = new_N / 10;
		ones = new_N % 10;
		new_N = (ones * 10) + ((tens + ones) % 10);
		cnt++;
		if (N == new_N)
			break;
	}
	printf("%d\n", cnt);
	return 0;
}
*/
/*/
#include <stdio.h>
int main() {
	int n//입력할 정수
		,cnt//사이클 결과값
		,tens//입력한 값의 십의 자릿수
		,ones//입력한 값의 일의 자릿수
		,new_ones//새로운 일의 자릿수
		,new_n//새로 만들어진 정수 
		,result;
	
	cnt = 0;
	scanf_s("%d", &n);
	result = n;
	while (1) {
		tens = n / 10;
		ones = n % 10;
		new_ones = (ones + tens) % 10;
		new_n = new_ones + (10 * ones);
		n = new_n;
		cnt++;
		if (result == new_n)
			break;
	};
	printf("%d\n", cnt);
}
*/