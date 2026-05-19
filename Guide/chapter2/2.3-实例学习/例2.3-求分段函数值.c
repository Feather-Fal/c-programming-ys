#include <stdio.h>
int main(void){
    int x, fx;
    printf("输入整数x：");
    scanf("%d",&x);
    fx = x < 0 ? x+1:(x<100 ? x*x : x*x+5);
    printf("分段函数的值：%d\n",fx);
    return 0;
}