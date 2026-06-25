#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d;
    double x1, x2;
    printf("输入一元二次方程的系数a，b，c：");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("方程无穷解！");
            else
                printf("方程无解！");
        }
        else
            printf("方程有一个根：x=%.2f", -c / b);
    }
    else
    {
        if (d == 0)
        {
            x1 = x2 = -b / (2 * a);
            printf("方程有两个相同实根：x1=x2=%.2f", x1);
        }
        else if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("方程有两个不同实根：x1=%.2f x2=%.2f", x1, x2);
        }
        else if (d < 0)
        {
            printf("方程有两个不同虚根：x1=%.2f+%.2fi x2=%.2f-%.2fi", -b / (2 * a), sqrt(-d) / (2 * a), -b / (2 * a), sqrt(-d) / (2 * a));
        }
    }
    return 0;
}