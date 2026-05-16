/* 例2_2.c */
#include <stdio.h>
int main(void){
    int year, isLeapYear;
    printf("输入某年的年份：");
    scanf("%d", &year);
    isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    isLeapYear ? printf("闰年\n") : printf("平年\n");
    return 0;
}