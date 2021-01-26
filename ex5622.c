/*
#include <stdio.h>
int main() {
	int a = 0;
	char v[16] = { NULL };
	scanf_s("%s", v, sizeof(v));
	for (int i = 0; v[i] != NULL; i++) {
		if (v[i] >= 'A' && v[i] <= 'C')
			a += 3;
		else if (v[i] >= 'D' && v[i] <= 'F')
			a += 4;
		else if (v[i] >= 'G' && v[i] <= 'I')
			a += 5;
		else if (v[i] >= 'J' && v[i] <= 'L')
			a += 6;
		else if (v[i] >= 'M' && v[i] <= 'O')
			a += 7;
		else if (v[i] >= 'P' && v[i] <= 'S')
			a += 8;
		else if (v[i] >= 'T' && v[i] <= 'V')
			a += 9;
		else if (v[i] >= 'W' && v[i] <= 'Z')
			a += 10;
		else if (v[i] == 0)
			a += 11;
		else if (v[i] == 1)
			a += 2;
	}
	printf("%d\n", a);
}
*/