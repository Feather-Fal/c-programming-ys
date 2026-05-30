/* 例3_18.c */
#include <stdio.h>
int main(void) {
    int i, j, sum;
    for(i = 2; i <= 1000; ++i){
        sum = 1;
        for(j = 2; j <= i / 2; ++j)
            if(i % j == 0)
                sum += j;
            if(sum == i)
                printf("%d\n", i);
    }
    return 0;
}