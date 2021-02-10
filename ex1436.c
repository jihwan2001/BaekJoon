#include <stdio.h>
#include <math.h>
int main() {
	int N, n = 0;
	int num = 665;
	scanf_s("%d", &N);
	while (1) {
		if (n == N)
			break;
		num++;
		for (int i = 0; i < 10; i++) {
			if (num / (int)pow(10, i) % 1000 == 666) {
				n++;
				break;
			}
		}
	}
	printf("%d\n", num);
}