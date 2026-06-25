#include <stdio.h>
#include <ctype.h>
int main(){
    char c;
    int digit = 0, alpha = 0, other = 0;
    printf("输入若干个字符：");
    while ((c = getchar()) != '\n'){
        if (isdigit(c))
            digit += 1;
        else if (isalpha(c))
            alpha += 1;
        else
            other += 1;
    }
    printf("英文字母个数：%d\n", alpha);
    printf("数字字符个数：%d\n", digit);
    printf("其他字符个数：%d\n", other);
    return 0;
}