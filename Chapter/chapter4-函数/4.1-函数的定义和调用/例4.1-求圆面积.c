/* 例4_1.c */
#include <stdio.h>
double computeArea(double r){
    #define PI 3.14159
    double area = 0;
    if(r > 0)
        area = PI * r * r;
    return area;
}
int main(void){
    double radius, area;
    printf("输入圆半径：");
    scanf("%lf", &radius);
    area = computeArea(radius);
    printf("圆面积：%.2f\n", area);
    return 0;
}