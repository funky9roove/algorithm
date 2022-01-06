#include <stdio.h>
int main()
{
	int A, B; //two integer
	scanf("%d %d", &A, &B); //scan
	if (A > B) printf(">"); //comparison
	if (A < B) printf("<");
	if (A == B) printf("==");
	return 0;
}