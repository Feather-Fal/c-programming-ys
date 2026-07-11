#include <stdio.h>
int main()
{
    char c;
    int a;
    printf("输入菱形填充字符：");
    scanf(" %c", &c);
    printf("输入菱形边长：");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++)
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; k++)
            printf("%c", c);
        printf("\n");
    }
    for (int i = 1; i < a; i++)
    {
        for (int k = 1; k <= i; k++)
            printf(" ");
        for (int j = 1; j <= 2 * (a - i) - 1; j++)
            printf("%c", c);
        printf("\n");
    }
    return 0;
}