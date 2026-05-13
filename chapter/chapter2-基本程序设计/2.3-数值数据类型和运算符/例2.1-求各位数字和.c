/* 例2_1.c */
#include <stdio.h>
int main(void){
    int a, b, c, n;
    printf("输入一个三位正整数：");
    scanf("%d", &n);
    a = n % 10;               /* 个位 */
    b = (n / 10) % 10;        /* 十位 */
    c = (n / 10 / 10) % 10;   /* 百位 */
    printf("整数中各位数字的和：%d\n", a + b + c);
    return 0;
}