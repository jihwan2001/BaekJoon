/*
#include <stdio.h>
#include <string.h>
int main() {
	int cnt = 0;
	char str[1000] = { NULL };
	scanf_s("%[^\n]", str,sizeof(str));
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != ' ') {
			if (i > 0 && str[i - 1] != ' ')
				continue;
			else
				cnt++;
		}
		
	}
	printf("%d\n", cnt);
}
*/