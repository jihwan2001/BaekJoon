/*
#include <stdio.h>
#include <string.h>
int select(char a[], int len) {
	int key = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if (a[i] == a[j])
				key = j - i;
			if (key > 1) {
				if (a[j - 1] != a[j])
					return 0;
			}
		}
	}
	return 1;
}
int main() {
	int num, sum=0;
	char v[101] = { NULL };
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf_s("%s", v, sizeof(v));
		sum += select(v, strlen(v));
	}
	printf("%d\n", sum);
	return 0;
}
*/