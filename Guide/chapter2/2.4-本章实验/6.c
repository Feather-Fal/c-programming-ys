#include <stdio.h>
int main(){
    int a,b;
    printf("输入整数1：");
    scanf("%d",&a);
    printf("输入整数2：");
    scanf("%d",&b);
    printf("两个整数的和：%d\n",a+b);
    printf("两个整数的平均值：%.2f\n",(double)(a+b)/2);
    printf("两个整数的最小值：%d\n",a>=b?b:a);
    printf("两个整数的最大值：%d\n",a<=b?b:a);
    return 0;
}