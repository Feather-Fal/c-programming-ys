#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("输入一个大写字母：");
    scanf("%c",&ch);
    ch = isupper(ch) ? tolower(ch) : ch;
    printf("对应的小写字母：%c",ch);
    return 0;
}