/* 例4_2.c */
#include <stdio.h>
void triangle(char ch, int height){
    int i, j, k;
    for(i = 1; i <= height; ++i){
        for(j = 1; j <= height - i; ++j)
            printf(" ");
        for(k = 1; k <= 2 * i - 1; ++k)
            printf("%c", ch);
        printf("\n");
    }
}
int main(void){
    char ch;
    int height;
    printf("输入三角形填充字符：");
    scanf("%c", &ch);
    printf("输入三角形高度：");
    scanf("%d", &height);
    triangle(ch, height);
    return 0;
}