#include <stdio.h>
int main(){
    double x, fx;
    printf("输入行李质量（千克）：");
    scanf("%lf", &x);
    if(x < 50)
        fx = x * 0.25;
    else if(x < 100)
        fx = 50 * 0.25 + (x - 50) * 0.35;
    else
        fx = 50 * 0.25 + 50 * 0.35 + (x - 100) * 0.45;
    printf("所需的运费：%.2f", fx);
    return 0;
}