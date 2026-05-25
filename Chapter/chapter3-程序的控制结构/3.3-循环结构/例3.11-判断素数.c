/* 例3_11.c */
#include <stdio.h>
#include <math.h>
int main(void){
    int n, i, limit, flag = 1;
    printf("输入一个正整数：");
    scanf("%d", &n);
    if(n <= 1)
        flag = 0;
    else if(n == 2)
        flag = 1;
    else if(n % 2 == 0)
        flag = 0;
    else {
        limit = sqrt(n) + 1;
        for(i = 3; i <= limit; i += 2) {
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
    }
    if(flag)
        printf("素数\n");
    else
        printf("非素数\n");
    return 0;
}