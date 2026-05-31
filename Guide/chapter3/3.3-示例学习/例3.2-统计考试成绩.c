/* 例3_2.c */
#include <stdio.h>
int main(void){
    int score, totalScore, maxScore, minScore, count;
    printf("输入学生成绩，以-1作为结束标志\n");
    scanf("%d", &score);
    maxScore = minScore = score;
    totalScore = 0;
    count = 0;
    while(score >= 0 && score <= 100){
        if(score > maxScore)
            maxScore = score;
        if(score < minScore)
            minScore = score;
        totalScore += score;
        ++count;
        scanf("%d", &score);
    }
    if(count > 0){
        printf("学生人数：%d\n", count);
        printf("最高分：%d\n", maxScore);
        printf("最低分：%d\n", minScore);
        printf("平均分：%.2f\n", (double)totalScore / count);
    }
    return 0;
}