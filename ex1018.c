/*
모르겠음
#include <stdio.h>
#define arr(a, b) a < b ? a : b
int main() {
	int N, M,min=32;
	char board[50][50];
	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf_s("%s", &board[i]);
	}
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			int cntw = 0, cntb = 0;
			for (int a = 0; a < i + 8; a++) {
				for (int b = 0; b < j + 8; b++) {
					if ((a + b) % 2 == 0) {
						if (board[a][b] == 'B')
							cntw++;
						else
							cntb++;
					}
					else {
						if (board[a][b] == 'B')
							cntb++;
						else
							cntw++;
					}
				}
			}
			min = arr(min, cntb);
			min = arr(min, cntw);
		}
	}
	printf("%d\n", min);
	return 0;
}
*/