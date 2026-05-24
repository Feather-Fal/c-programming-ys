/* 例3_8.c */
/* 由于书上示例程序有问题（第15行m、n值已改变）故修改示例程序 */
#include <stdio.h>
int main(void){
    int m, n, r, gcd, lcm;
    
    int original_m, original_n;    //新增，保护用户输入的原始值，避免被辗转相除法循环修改

    printf("输入两个正整数：");
    scanf("%d%d", &m, &n);
    
    original_m = m;    //备份原始输入值，用于后续求最小公倍数
    original_n = n;

    while(1){
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    gcd = n;
    
    lcm = original_m / gcd * original_n;    //15行修正
    
    printf("最大公约数：%d\n", gcd);
    printf("最小公倍数：%d\n", lcm);
    return 0;
}
