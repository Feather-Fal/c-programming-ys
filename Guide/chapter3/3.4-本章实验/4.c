#include <stdio.h>
#include <math.h>
int main(){
    double x, fx;
    printf("输入x：");
    scanf("%lf", &x);
    if(x < 0)
        fx = x * x;
    else if(x >= 9)
        fx = x - 6;
    else
        fx = sqrt(x);
    printf("分段函数的值：%.2f", fx);
    return 0;
}