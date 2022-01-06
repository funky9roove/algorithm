#include <stdio.h>
int main()
{
    int h, m, all;
    scanf("%d %d", &h, &m);
    if (h == 0) h = 24;
    all = (h * 60) + m;
    all -= 45;
    h = all / 60;
    m = all % 60;
    if (h == 24) h = 0;
    printf("%d %d", h, m);
    return 0;
}