/* 例3_10.c */
#include <stdio.h>
int main(void){
    int n, count = 0;
    printf("输入一个非负整数：");
    scanf("%d", &n);
    do{
        n /= 10;
        ++count;
    } while(n > 0);
    printf("整数位数：%d\n", count);
    return 0;
}