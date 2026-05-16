#include <stdio.h>
int main(void){
    char a;
    int b;
    a = getchar();
    scanf("%d",&b);
    a = a - 'A' + '0';
    b =b*2;
    printf("%c%c\n", a, b);
    return 0;
}