#include <stdio.h>
int main(){
    int a;
    printf("输入一个整数：");
    scanf("%d",&a);
    a%2==0 && a%3==0 ? 
        printf("%d能同时被2和3整除！\n%d能被2或3整除！",a,a) :(a%2==0 || a%3==0 ? 
            printf("%d能被2或3整除！\n%d能被2或3整除且只被其一整除！",a,a) : printf("%d不能被2或3整除！",a));
    return 0;
}