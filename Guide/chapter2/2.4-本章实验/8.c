#include <stdio.h>
#include <math.h>
int main(){
    double x,fx;
    printf("输入整数x：");
    scanf("%lf",&x);
    fx= x<0 ? pow(x+1,2)+2*x+1/x : sqrt(x) ; 
    printf("分段函数的值：%.2f",fx);
    return 0;
}