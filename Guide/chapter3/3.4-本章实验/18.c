#include <stdio.h>
#include <math.h>
int main(){
    double a,x,per=0;
    printf("输入一个数：");
    scanf("%lf",&a);
    x=a;
    while(fabs(x-per)>=1e-6){
        per=x;
        x=1.0/3.0*(2*x+a/(x*x));
    }
    printf("立方根：%f",x);
    return 0;
}