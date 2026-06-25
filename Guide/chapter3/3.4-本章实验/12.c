#include <stdio.h>
int main()
{
    double n, total = 0.0;
    scanf("%lf", &n);
    while (n >= 1)
    {
        total += 1.0 / (2 * n - 1.0);
        n -= 1;
    }
    printf("%.3f", total);
    return 0;
}