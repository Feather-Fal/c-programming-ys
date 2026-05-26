/* 例3_14.c */
#include <stdio.h>
int main(void){
    int sum = 0, i;
    for(i = 1; i <= 20; ++i){
        sum += i;
        if(sum >= 100)
            break;
    }
    printf("i=%d, sum=%d\n", i, sum);
    return 0;
}