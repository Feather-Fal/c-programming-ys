/* 例4_11.c */
#include <stdio.h>
void t1(void);
void t2(void);
int main(void){
    t1();
    t2();
    return 0;
}
int y;              /* 全局变量 */
void t1(void){
    int x = 1;      /* 局部变量 */
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    ++x;
    ++y;
}
void t2(void){
    int x = 1;      /* 局部变量 */              
    printf("x=%d\n", x);
    printf("y=%d\n", y);
}