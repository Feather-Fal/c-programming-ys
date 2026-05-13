#include <stdio.h>
#define PI 3.14159
int main(void){
    double R, r;
    printf("输入圆环的外半径：");
    scanf("%lf", &R);
    printf("输入圆环的内半径：");
    scanf("%lf", &r);
    printf("圆环的面积：%.2f\n", PI * (R * R - r * r));
    return 0;
}