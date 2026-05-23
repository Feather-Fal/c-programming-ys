/* 例3_5.c */
#include <stdio.h>
int main(void) {
    int bookings;
    double discount;
    printf("输入订票量：");
    scanf("%d", &bookings);
    switch(bookings / 10) {
        case 0:
            discount = 0.1;
            break;
        case 1:
            discount = 0.15;
            break;
        case 2:
            discount = 0.3;
            break;
        default:
            discount = 0.45;
            break;
    }
    printf("机票折扣率：%.0f%%\n", discount * 100);
    return 0;
}