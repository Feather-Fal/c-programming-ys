#include <stdio.h>
int main(void){
    int a=1, b=2, c;
    c=(a++ == b) ? 2 : 3;
    printf("%d\n",c);
    return 0;
}