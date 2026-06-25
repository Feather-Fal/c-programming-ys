#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    if (b > c)
    {
        d = b;
        b = c;
        c = b;
    }
    if (a > c)
    {
        d = a;
        a = c;
        c = a;
    }
    printf("%d->%d->%d", a, b, c);
    return 0;
}