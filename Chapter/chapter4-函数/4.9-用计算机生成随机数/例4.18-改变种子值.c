/* 例4_18.c */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i;
    unsigned int seed;
    printf("输入种子值：");
    scanf("%u", &seed);
    srand(seed);
    for(i = 1; i <= 5; ++i)
        printf("%d：%d\n", i, rand());
    return 0;
}