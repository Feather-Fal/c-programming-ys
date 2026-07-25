/* 例4_5_1.c */
#include <stdio.h>
int combinations(int n, int k);
double factorial(int n);
int main(void){
    int n, k;
    printf("输入总的元素个数：");
    scanf("%d", &n);
    printf("输入要取出的元素个数：");
    scanf("%d", &k);
    printf("C(%d,%d)=%d\n", n, k, combinations(n, k));
    return 0;
}
int combinations(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n - k));
}
double factorial(int n){
    int i;
    double mul;
    mul = 1;
    for(i = 1; i <= n; ++i){
        mul *= i;
    }
    return mul;
}