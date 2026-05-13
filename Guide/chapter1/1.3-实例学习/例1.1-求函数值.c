/* 编写程序，求函数y=4x^2+5x+7的值 */
#include <stdio.h>
int main(void){
    int x, y;
    scanf("%d", &x);
    y = 4 * x * x + 5 * x + 7;
    printf("%d\n", y);
    return 0;
}