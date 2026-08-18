/* 例4_15.c */
#include <stdio.h>
#define MAX(x, y) ((x)>(y)?(x):(y))
int main(void){
    int m = 2, n = 3;
    double a = 5.5, b = -8.5;
    printf("m=%d, n=%d, 最大值=%d\n", m, n, MAX(m, n));
    printf("a=%f, b=%f, 最大值=%f\n", a, b, MAX(a, b));
    return 0;
}