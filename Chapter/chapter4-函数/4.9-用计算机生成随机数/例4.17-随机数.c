/* 例4_17.c */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i;
    printf("RAND_MAX=%d\n", RAND_MAX);
    for(i = 1; i <= 5; ++i)
        printf("%d：%d\n", i, rand());
    return 0;
}