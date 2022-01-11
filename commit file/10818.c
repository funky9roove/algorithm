#include <stdio.h>
int main()
{
	int i, n, num[1000000];
	int max = -1000000, min = 1000000;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d ", &num[i]);
		if (num[i] < min) min = num[i];
		if (num[i] > max) max = num[i];
	}
	printf("%d %d", min, max);
	return 0;
}