/* 例4_10_2.c */
#include <stdio.h>
#include <time.h>
int fib(int n);
int main(void){
    int n;
    clock_t start, end;
    printf("输入斐波那契数列的下标：");
    scanf("%d", &n);
    start = clock();
    printf("斐波那契数列第%d项的值：%d\n", n, fib(n));
    end = clock();
    printf("运行时间：%f秒\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}
int fib(int n){
    int f0 = 0, f1 = 1, f, i;   
    if(n == 0 || n == 1)
        return 0;
    for(f = f0 + f1, i = 2; i < n; ++i){
        f0 = f1;
        f1 = f;
        f = f0 + f1;
    }
    return f;
}