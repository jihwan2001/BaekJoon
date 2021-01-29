/*
#include <stdio.h>
int main() {
	int a, b, v, day;
	scanf_s("%d %d %d", &a, &b, &v);
	day = (v - b - 1) / (a - b) + 1;
	printf("%d\n", day);
	return 0;
}
*/
#include <stdio.h>
int main() {
	int a, b, v;
	int day, every, how, answer; 
	scanf_s("%d %d %d", &a, &b, &v);
	if (a == v)
		printf("1\n");
	day = a - b; every = v - a;
	if (every % day)
		how = every / day + 1;
	else
		how = every / day;
	answer = how + 1;
	printf("%d\n", answer);
}