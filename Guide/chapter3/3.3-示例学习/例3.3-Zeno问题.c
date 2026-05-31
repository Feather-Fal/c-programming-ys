/* 例3_3.c */
#include <stdio.h>
int main(void){
    double sum, item;
    sum = 0;
    item = 0.5;
    while(sum != sum + item){
        sum += item;
        item /= 2;
    }
    printf("%g\n", sum);
    return 0;
}