/* 例3_19.c */
#include <stdio.h>
int main(void){
    int i, value, count, power;
    for(i = 1; i <= 10000; ++i){
        count = 0;
        value = i;
        while(value > 0){
            value /= 10;
            ++count;
        }
        power = 1;
        while(count != 0){
            power *= 10;
            --count;
        }
        if(i == i * i % power)
            printf("%d\t%d\n", i, i * i);
    }
    return 0;
}