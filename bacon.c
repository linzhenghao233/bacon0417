#include <stdio.h>
#include <ctype.h>

int main(void) {
	int temp[26][5], i, j, num, k, bacon[26][5], ch;

	for (i = 0; i < 26; i++) {
		num = i;
		for (j = 0; j < 5; j++) {
			temp[i][j] = num % 2;
			num /= 2;
		}
	}

	for (i = 0; i < 26; i++) {
		for (j = 0, k = 4; j < 5; j++, k--)
			bacon[i][j] = temp[i][k];
	}

	printf("ÇëÊäÈëÄãµÄÃû×ÖÆ´Òô£º");
	while ((ch = getchar()) != EOF) {
		if (ch == '\n')
			break;

		for (i = 0; i < 5; i++) {
			if (bacon[toupper(ch) - 'A'][i] == 1)
				printf("B");
			else
				printf("A");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
			printf("%d", bacon[toupper(ch) - 'A'][i]);
		printf("\n");
	}

	return 0;
}