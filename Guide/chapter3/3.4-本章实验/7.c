#include <stdio.h>
#include <math.h>
#define EPSILON 1e-5
int main()
{
    double a, b, c;
    printf("输入三条边：");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a * b * c > 0 && a + b > c && a + c > b && b + c > a)
    {
        if (fabs(a - b) <= EPSILON || fabs(a - c) <= EPSILON || fabs(b - c) <= EPSILON)
        {
            if (fabs(a - b) <= EPSILON && fabs(a - c) <= EPSILON && fabs(b - c) <= EPSILON)
                printf("等边三角形");
            else if (fabs(a * a + b * b - c * c) <= EPSILON || fabs(a * a + c * c - b * b) <= EPSILON || fabs(b * b + c * c - a * a) <= EPSILON)
                printf("等腰直角三角形");
            else
                printf("等腰三角形");
        }
        else if (fabs(a * a + b * b - c * c) <= EPSILON || fabs(a * a + c * c - b * b) <= EPSILON || fabs(b * b + c * c - a * a) <= EPSILON)
            printf("直角三角形");
        else
            printf("一般三角形");
    }
    else
        printf("不能构成三角形");
    return 0;
}