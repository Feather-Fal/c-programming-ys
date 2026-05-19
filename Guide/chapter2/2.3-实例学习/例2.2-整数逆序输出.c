#include <stdio.h>
int main(void){
    int a, b, c, n;
    scanf("%d", &n);
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 10 / 10) % 10;
    n = a * 100 + b * 10 + c;
    printf("%d\n",n);
    return 0;
}