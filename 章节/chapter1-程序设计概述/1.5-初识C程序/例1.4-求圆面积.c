/* 例1_4.c */
#include <stdio.h>
#define PI 3.14159
int main(void){
    double radius, area;
    printf("输入圆半径：");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("圆面积：%.2f\n", area);
    return 0;
}