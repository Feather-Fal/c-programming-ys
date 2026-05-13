#include <stdio.h>
int main(void){
    double f, c;
    printf("输入摄氏温度：");
    scanf("%lf", &c);
    f = (9.0 /5.0) * c + 32; 
    printf("对应的华氏温度：%.2f\n", f);
    return 0;
}