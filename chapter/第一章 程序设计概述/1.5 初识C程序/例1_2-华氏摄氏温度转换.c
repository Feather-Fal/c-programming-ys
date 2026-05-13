/* 例1_2.c */
#include <stdio.h>
int main(void){
    double f, c;
    printf("输入华氏温度：");
    scanf("%lf", &f);
    c = (5.0 /9.0) * (f - 32);
    printf("对应的摄氏温度：%f\n", c);
    return 0;
}