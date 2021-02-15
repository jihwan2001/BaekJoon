/*
#include <stdio.h>
int n, m;
int result[1000];
int	checklist[1000];

void dfs(int l) {
	int i;
	if (l == m) {
		for (i = 0; i < m; i++)
			printf("%d ", result[i]);
		printf("\n");
	}
	else {
		for (i = 1; i <= n; i++) {
			if (checklist[i] == 0) {
				result[l] = i;
				checklist[i] = 1;
				dfs(l + 1);
				checklist[i] = 0;
			}
		}
	}
}
int main() {
	scanf_s("%d %d", &n, &m);
	dfs(0);
}
*/