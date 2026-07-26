/* 例4_9.c */
#include <stdio.h>
double power(double x, int n);
double powerHelper(double x, int n);
int main(void){
    double x;
    int n;
    printf("输入底数x：");
    scanf("%lf", &x);
    printf("输入指数n：");
    scanf("%d", &n);
    printf("%f^%d=%f\n", x, n, power(x, n));
    return 0;
}
double power(double x, int n){
    if(n >= 0)
        return powerHelper(x, n);
    else   
        return 1 / powerHelper(x, -n);
}
double powerHelper(double x, int n){
    if(n == 0)
        return 1;
    else 
        return x * powerHelper(x, n -1);
}