/* 例3_12.c */
#include <stdio.h>
int main(void) {
    int i, n;
    double mul = 1;
    printf("输入一个正整数：");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
        mul *= i;
    printf("%d!=%.0f\n", n, mul);
    return 0;
}