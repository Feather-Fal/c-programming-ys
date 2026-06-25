#include <stdio.h>
int main()
{
    int a, b, n, sum = 0;
    scanf("%d%d", &a, &n);
    b = a;
    while (n > 0)
    {
        sum += b;
        b = b * 10 + a;
        n--;
    }
    printf("sum = %d", sum);
    return 0;
}