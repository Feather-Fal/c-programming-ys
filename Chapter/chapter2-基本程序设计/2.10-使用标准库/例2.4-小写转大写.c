/* 例2_4.c */
#include <stdio.h>
#include <ctype.h>
int main(void){
    int lowercase, uppercase;
    printf("输入一个小写字母：");
    lowercase = getchar();
    uppercase = islower(lowercase) ? toupper(lowercase) : lowercase;
    printf("对应的大写字母：%c\n", uppercase);
    return 0;
}