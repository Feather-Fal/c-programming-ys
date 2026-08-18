/* 例4_19.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initializeSeed(void);
int generateRandomNumber(int a, int b);
void readGuesses(int number);
int main(void){
    char choice;
    int number;
    printf("猜出1~100之间的神秘数\n");
    initializeSeed();
    do{
        number = generateRandomNumber(1, 100);
        printf("产生神秘数\n");
        readGuesses(number);
        printf("继续猜？(y/n) ");
        scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y');
    return 0;
}
void initializeSeed(void){
    srand(time(NULL));
} 
int generateRandomNumber(int a, int b){
    return a + rand() % (b - a + 1);
}
void readGuesses(int number){
    int guess, count = 0;
    while(1){
        ++count;
        printf("输入你的猜数：");
        scanf("%d", &guess);
        if(guess == number){
            printf("猜对了！猜了%d次\n", count);
            break;
        }
        else if(guess < number)
            printf("太小了！再大一点！\n");
        else 
            printf("太大了！再小一点！\n");
    }
}