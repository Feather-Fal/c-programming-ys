/* 例4_13.c */
#include <stdio.h>
int a = 2;
int main(void){
    int a = 4;
    printf("a=%d\n", a);
    {
        int a = 6;
        printf("a=%d\n", a);
    }
    printf("a=%d\n", a);
    return 0;
}