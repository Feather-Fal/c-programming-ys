/* 例4_3.c */
#include <stdio.h>
int isPalindrome(int n);
int main(){
    int n;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    if(isPalindrome(n))
        printf("回文数\n");
    else
        printf("非回文数\n");
    return 0;
}
int isPalindrome(int n){
    int t, r, result = 0;
    t = n;
    while(t != 0){
        r = t % 10;
        result = result * 10 + r;
        t /= 10;
    }
    return (n == result);
}