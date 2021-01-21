/*
#include <stdio.h>
void one(int n) {
	if (n < 100)
		printf("%d\n", n);
	else {
		int i, cnt, a, b, c;
		cnt = 99;
		for (i = 100; i <= n; i++) {
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;
			if ((c - b) == (b - a))
				cnt++;
		}
		printf("%d\n", cnt);
	}

}
int main() {
	int n;
	scanf_s("%d", &n);
	one(n);
}

#include <stdio.h>
int hansu(int n) {
	if (n < 100)
		printf("%d\n", n);
	else {
		int a, b, c,cnt=99;
		for (int i = 100; i < n; i++) {
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;
			if ((c-b) == (b - a))
				cnt++;
		}
		printf("%d\n", cnt);
	}
}
int main() {
	int n;
	scanf_s("%d", &n);
	hansu(n);
}
*/