#include <stdio.h>
#include <math.h>
int main(void){
    double side,area;
    printf("输入六边形的边长：");
    scanf("%lf",&side);
    area = 1.5 * sqrt(3)*side*side;
    printf("六边形面积：%.2f\n",area);
    return 0;
}