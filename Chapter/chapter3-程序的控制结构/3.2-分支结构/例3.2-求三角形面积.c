/* 例3_2.c */
#include <stdio.h>
#include <math.h>
int main(void){
    double a, b, c, p, area;
    printf("输入三角形的三条边：");
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a){
        p = (a + b + c) / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("三角形的面积：%.2f\n", area);
    }
    else
        printf("不能构成三角形\n");
    return 0;
}