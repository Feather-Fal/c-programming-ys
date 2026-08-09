/* 例4_12.c */
#include <stdio.h>
void t1(void);
int main(void){
    t1();
    t1();
    return 0;
}
void t1(void){
    static int x = 1;
    int y = 1;
    ++x;
    ++y;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
}