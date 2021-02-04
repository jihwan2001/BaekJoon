/*
#include <stdio.h>
int main() {
	int x, y, w, h;
	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	int A = 0, B = 0;
	A = w - x, B = h - y;
	if (A > B)
		printf("%d\n", B);
	else
		printf("%d\n", A);
	return 0;
}

#include <stdio.h>
int main() {
	int x, y, w, h, xbig, ybig;
	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	xbig = x <= w - x ? w : w - x;
	ybig = y <= h - y ? y : h - y;
	printf("%d\n", xbig <= ybig ? xbig : ybig);
}
*/