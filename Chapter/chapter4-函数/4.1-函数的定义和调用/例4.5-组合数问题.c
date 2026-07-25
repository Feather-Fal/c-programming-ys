/* 例4_c.c */
#include <stdio.h>
double factorial(int n){
    int i;
    double mul;
    mul = 1;
    for(i = 1; i <= n; ++i)
        mul *= i;
    return mul;
}
int combinations(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int main(void){
    int n, k;
    printf("输入总的元素个数：");
    scanf("%d", &n);
    printf("输入要取出的元素个数：");
    scanf("%d", &k);
    printf("C(%d,%d)=%d\n", n, k, combinations(n, k));
    return 0;
}