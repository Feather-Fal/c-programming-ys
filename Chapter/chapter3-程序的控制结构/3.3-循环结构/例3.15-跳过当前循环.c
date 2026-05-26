/* 例3_15.c */
#include <stdio.h>
int main(void){
    int sum = 0, i;
    for(i = 1; i <= 20; ++i){
        if(i ==10 || i == 11)
            continue;
        sum += i;
    }
    printf("sum=%d\n", sum);
    return 0;
}