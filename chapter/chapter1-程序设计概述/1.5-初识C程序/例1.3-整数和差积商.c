/* 例1_3.c */
#include <stdio.h>
int main(void){
    int num1, num2;
    printf("输入两个整数：");
    scanf("%d%d", &num1, &num2);
    printf("%d+%d=%d\n", num1, num2, num1 + num2);
    printf("%d-%d=%d\n", num1, num2, num1 - num2);
    printf("%d*%d=%d\n", num1, num2, num1 * num2);
    printf("%d/%d=%d\n", num1, num2, num1 / num2);
    return 0;
}