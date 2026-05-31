/* 例3_1.c */
#include <stdio.h>
int main(void){
    int choice, count;
    count = 0;
    while(1){
        if(count == 5)
            break;
        printf("[1] 苹果\n");
        printf("[2] 梨子\n");
        printf("[3] 香蕉\n");
        printf("[4] 橘子\n");
        printf("[0] 退出\n");
        printf("输入你的选择：");
        scanf("%d", &choice);
        if(choice == 0){
            printf("谢谢\n");
            break;
        }
        switch(choice){
            case 1:
                printf("你选择了苹果\n");
                break;
            case 2:
                printf("你选择了梨子\n");
                break;
            case 3:
                printf("你选择了香蕉\n");
                break;
            case 4:
                printf("你选择了橘子\n");
                break;
            default:
                printf("非法输入\n");
                break;
        }
        ++count;
    }
    return 0;
}