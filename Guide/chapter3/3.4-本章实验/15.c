#include <stdio.h>
int main()
{
    int a = 0, n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        a += i;
        sum += a;
    }
    printf("%d", sum);
    return 0;
}