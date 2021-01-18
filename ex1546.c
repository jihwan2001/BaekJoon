/*/
#include <stdio.h>
int main() {
	int num;
	double arr[1000];
	double avg=0, m = 0;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf_s("%lf", &arr[i]);
		if (m < arr[i])
			m = arr[i];
	}
	
	for (int i = 0; i < num; i++) {
		
		arr[i] = arr[i] / m * 100.0;
		avg += arr[i];
	}
	printf("%.2lf\n", (avg / (double)num));
}
*/