/* 例3_9.c */
#include <stdio.h>
#include <math.h>
int main(void){
    double a, x, g;
    printf("输入一个数：");
    scanf("%lf", &a);
    if(a < 0)
        printf("负数没有平方根\n");
    else {
        x = a;
        g = x / 2;
        while(fabs(x - g) >= 1e-6){
            x = g;
            g = (x + a / x) / 2;
        }
        printf("平方根：%f\n", g);
    }
    return 0;
}