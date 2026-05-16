/* 例2_3.c */
#include <stdio.h>
#include <math.h>
int main(void){
    double a, b, c, p, area;
    printf("输入三角形的三条边：");
    scanf("%lf%lf%lf", &a, &b, &c);
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("三角形的面积：%.2f\n", area);
    return 0;
}