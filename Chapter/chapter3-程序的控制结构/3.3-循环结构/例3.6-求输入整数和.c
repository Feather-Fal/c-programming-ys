/* 例3_6.c */
#include <stdio.h>
int main(void){
    int value, total;
    total = 0;
    printf("输入若干个整数，以^Z作为结束标志\n");
    while(scanf("%d", &value) != EOF)
        total += value;
    printf("整数和：%d\n", total);
    return 0;
}