#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	int N;
	int a, b, c;
	int num = 0;
	scanf("%d", &N);
	if (N < 10) {
		N *= 10;
	}
	c = N;
	while (1) {
		a = c / 10;
		b = c % 10;
		c = b * 10 + (a + b) % 10;
		num++;
		if (c == N) {
			break;
		}
	}
	printf("%d\n", num);
	return 0;
}