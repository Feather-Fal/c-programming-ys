/* 例3_7.c */
#include <stdio.h>
#include <math.h>
int main(void){
    double total = 0.0, item = 1.0;
    int d = 1, sign = 1;
    while(fabs(item) >= 1e-6){
        item = sign / (double)d;
        total += item;
        d += 2;
        sign *= -1;
    }
    printf("pi=%f\n", 4 * total);
    return 0;
}