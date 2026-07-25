/* 例4_6.c */
#include <stdio.h>
double factorial(int n);
int main(void){
    int n;
    printf("输入一个正整数：");
    scanf("%d", &n);
    printf("%d!=%.0f\n", n, factorial(n));
    return 0;
}
double factorial(int n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}