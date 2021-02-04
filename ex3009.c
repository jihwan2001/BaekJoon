/*
#include <stdio.h>
int main() {
	int x, y;
	int ax, ay;
	int bx, by;
	int cx, cy;
	scanf_s("%d %d", &ax, &ay);
	scanf_s("%d %d", &bx, &by);
	scanf_s("%d %d", &cx, &cy);
	if (ax == bx)
		x = cx;
	else if (ax == cx)
		x = bx;
	else
		x = ax;
	if (ay == by)
		y = cy;
	else if (ay == cy)
		y = by;
	else
		y = ay;
	printf("%d %d", x, y);
}

#include <stdio.h>
int main() {
	int x[4], y[4], i=0;
	for (int i = 0; i < 3; i++)
		scanf_s("%d %d", &x[i], &y[i]);
	if (x[0] == x[1])x[3] = x[2];
	else if (x[0] == x[2]) x[3] = x[1];
	else x[3] = x[0];
	if (y[0] == y[1])y[3] = y[2];
	else if (y[0] == y[2]) y[3] = y[1];
	else y[3] = y[0];
	printf("%d %d", x[3], y[3]);
}
*/