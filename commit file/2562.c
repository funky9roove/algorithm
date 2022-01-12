#include <stdio.h>
int main()
{
	int num[9], i, max = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d\n", &num[i]);
		if (max < num[i]) max = num[i];
	}
	printf("%d\n", max);
	for (i = 0; i < 9; i++) {
		if (num[i] == max) {
			printf("%d\n", i + 1);
			break;
		}
	}
	return 0;
}