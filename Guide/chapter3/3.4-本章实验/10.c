#include <stdio.h>
int main()
{
    int score, rank;
    printf("输入学生的考试成绩：");
    scanf("%d", &score);
    rank = score / 10;
    switch (rank)
    {
    case 10:
    case 9:
        printf("等级：A");
        break;
    case 8:
        printf("等级：B");
        break;
    case 7:
        printf("等级：C");
        break;
    case 6:
        printf("等级：D");
        break;
    default:
        printf("等级：E");
        break;
    }
}