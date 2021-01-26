/*
#include <stdio.h>
#include <string.h>
int main() {
	int hap = 0;
	char arr[100];
	scanf_s("%s", arr, sizeof(arr));
	hap = strlen(arr);
	for (int i = 0; i < strlen(arr); i++) {
		if ((arr[i] == 'l' || arr[i] == 'n') && arr[i + 1] == 'j')
			hap--;
		if (arr[i] == 'd' && arr[i+1] == 'z' && arr[i + 2] == '=')
			hap--;
		if (arr[i] == '-' || arr[i] == '=')
			hap--;
	}
	printf("%d", hap);
}
*/