#include <stdio.h>
int main(void){
    int a,b;
    int add, sub, mul, div, mod;
    scanf("%d%d", &a, &b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("%d\n", add+sub+mul+div+mod);
    return 0;
}