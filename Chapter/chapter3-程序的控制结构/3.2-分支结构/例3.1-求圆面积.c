/* 例3_1.c */
#include <stdio.h>
#define PI 3.14159
int main(void){
    double radius, area;
    printf("输入圆半径：");
    scanf("%lf", &radius);
    if(radius >= 0){
        area = PI * radius * radius;
        printf("圆面积：%.2f\n", area);
    }
    else
        printf("圆半径为负值");
    return 0;
}