/*
#include <stdio.h>
int main() {
	int c, n, sum = 0, jum[1000];
	double avg=0;
	scanf_s("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf_s("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &jum[j]);
			sum += jum[j];
			
		}
		avg = sum / n;
		sum = 0;
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (avg < jum[j])
				cnt++;
			
		}
		
		printf("%.3f%%\n", (double)cnt * 100 / n);
	}
	return 0;
}
*/