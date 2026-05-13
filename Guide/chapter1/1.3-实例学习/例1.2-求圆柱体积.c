/* 编写程序，输入半径和高，求圆柱体积 */
#include <stdio.h>
#define PI 3.14159
int main(void){
    double radius, length;
    double area, volume;
    printf("输入圆柱体的半径：");
    scanf("%lf", &radius);
    printf("输入圆柱体的长度：");
    scanf("%lf", &length);
    area = PI * radius *radius;    /* 求圆柱体底面积 */
    volume = area * length;        /* 求圆柱体体积 */
    printf("圆柱体的体积：%.2f\n", volume);
    return 0;
}