/* 例4_8.c */
#include <stdio.h>
int peach(int n);
int main(void){
    printf("第1天的桃子个数=%d\n", peach(1));
    return 0;
}
int peach(int n){
    if(n == 10)
        return 1;
    else  
        return (peach(n + 1) + 1)*2;
}