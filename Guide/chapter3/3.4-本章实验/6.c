#include <stdio.h>
int main()
{
    double salary, tax, rate;
    printf("输入月薪：");
    scanf("%lf", &salary);
    if (salary <= 850)
        tax = 0;
    else
    {
        if (salary <= 1350)
            rate = 0.05;
        else if (salary <= 2850)
            rate = 0.1;
        else if (salary <= 5850)
            rate = 0.15;
        else
            rate = 0.2;
        tax = rate * (salary - 850);
    }
    printf("个人所得税：%.2f", tax);
    return 0;
}