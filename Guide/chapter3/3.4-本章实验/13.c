#include <stdio.h>
#include <math.h>
int main()
{
    int n = 1;
    double sum = 0L, item = 1.0L, flag = 1.0L;
    while (fabsl(item) >= 1e-6)
    {
        item = flag / (3 * n - 2);
        sum += item;
        flag = -flag;
        n++;
    }
    printf("%.6Lf", sum);
    return 0;
}