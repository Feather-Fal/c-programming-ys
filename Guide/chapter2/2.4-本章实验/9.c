#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    double fx;
    printf("输入整数a：");
    scanf("%d",&a);
    fx=(cos(50.0/180.0*M_PI)+sqrt(37.5))/(a+1);
    printf("计算结果：%.2f",fx);
    return 0;
}