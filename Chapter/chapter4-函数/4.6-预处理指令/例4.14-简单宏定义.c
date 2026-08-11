#include <stdio.h>
int main(void){
    #define N 5
    printf("N=%d\n", N);
    #undef N
    #define N 10
    printf("N=%d\n", N);
    return 0;
}