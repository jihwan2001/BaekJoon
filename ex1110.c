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
	int n//�Է��� ����
		,cnt//����Ŭ �����
		,tens//�Է��� ���� ���� �ڸ���
		,ones//�Է��� ���� ���� �ڸ���
		,new_ones//���ο� ���� �ڸ���
		,new_n//���� ������� ���� 
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