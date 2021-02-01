/*
잘 모르겠음
#include <stdio.h>
#include <math.h>
int main() {
	int t;
	long long a, x, y;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf_s("%d %d", &x, &y);
		a = (int)sqrt(y - x);
		if ((y - x) == a * a)
			printf("%lld\n", 2 * a - 1);
		else if (a * a < (y - x) && (y - x) <= a * a + a)
			printf("%lld\n", 2 * a);
		else if (a * a + a(y - x) && (y - x) < (a + 1) * (a + 1))
			printf("%lld\n", 2 * a + 1);
	}
}
*/