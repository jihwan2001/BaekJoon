#include <stdio.h>
int main() {
	int a, b,a1,b1;
	scanf_s("%d %d", &a, &b);
	a1 = (a / 100) + (a / 10 % 10 * 10) + (a % 10 * 100);
	b1 = (b / 100) + (b / 10 % 10 * 10) + (b % 10 * 100);
	if (a1 > b1)
		printf("%d\n", a1);
	else
		printf("%d\n", b1);
	return 0;

}