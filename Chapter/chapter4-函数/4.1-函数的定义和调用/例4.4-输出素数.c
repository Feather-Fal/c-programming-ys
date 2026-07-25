/* 例4.4.c */
#include <stdio.h>
#include <math.h>
int isPrime(int n){
    int i, limit, flag = 1;
    if(n <= 1)
        flag = 0;
    else if(n == 2)
        flag = 1;
    else if(n % 2 == 0)
        flag = 0;
    else{
        limit = sqrt(n) + 1;
        for(i = 3; i <= limit; i += 2){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
    } 
    return flag;
}
int main(void){
    int i, count;
    count  = 0;
    for(i = 100; i <= 200; ++i){
        if(isPrime(i)){
            printf("%6d", i);
            ++count;
            if(count % 8 == 0)
                printf("\n");
        }
    }
    return 0;
}