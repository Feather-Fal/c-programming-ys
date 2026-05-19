#include <stdio.h>
int main(void){
    int a, b, t;
    printf("输入整数a：");
    scanf("%d", &a);
    printf("输入整数b：");
    scanf("%d", &b);
    printf("交换前：");
    printf("a=%d, b=%d\n", a, b);
    t = a;
    a = b;
    b = t;
    printf("交换后：");
    printf("a=%d, b=%d\n", a, b);
    return 0;
}