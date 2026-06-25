#include <stdio.h>
int main()
{
    int sum, m;
    scanf("%d", &m);
    sum = ((m - 10) * (11 + m) / 2);
    printf("sum = %d", sum);
    return 0;
}