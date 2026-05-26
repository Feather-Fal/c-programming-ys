/* 例3_16 */
#include <stdio.h>
int main(void){
    char ch;
    int i, j, k, n;
    printf("输入三角形填充字符：");
    scanf("%c", &ch);
    printf("输入三角形高度：");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        for(j = 1; j <= n - i; ++j)
            printf(" ");
        for(k = 1; k <= 2 * i - 1; ++k)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}