/*
#include <stdio.h>
#include <string.h>
int main() {
	int cnt = 0, mcnt = 0;
	char s[10000], a;
	scanf_s("%s", s, sizeof(s));
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == i || s[j] == i - 32)
				cnt++;
		}
		if (mcnt < cnt) {
			mcnt = cnt;
			a = i;
			if (a >= 97)
				a -= 32;
		}
		else if (mcnt == cnt)
			a = '?';
		cnt = 0;
	}
	printf("%c", a);
}
*/