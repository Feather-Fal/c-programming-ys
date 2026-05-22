/* 例3_3.c */
#include <stdio.h>
#include <math.h>
int main(void){
    double x, fx;
    printf("输入x：");
    scanf("%lf", &x);
    if(x >= 0.5 && x < 1.5){
        fx = sin(x);
        printf("sin(%f)=%f\n", x, fx);
    }
    else if(x >= 1.5 && x < 4.5) {
        fx = log(x);
        printf("log(%f)=%f\n", x, fx);
    }
    else if(x >= 4.5 && x < 7.5) {
        fx = exp(x);
        printf("exp(%f)=%f\n", x, fx);
    }
    else
        printf("x值超出范围!\n");
    return 0;
}