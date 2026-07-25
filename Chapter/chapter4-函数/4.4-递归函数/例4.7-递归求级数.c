/* 例4_7.c */
#include <stdio.h>
double m(int i);
int main(void){
    int i;
    printf("i\t\tm(i)\n");
    for(i = 1; i <= 20; ++i)
        printf("%d\t\t%f\n", i, m(i));
    return 0;
}
double m(int i){
    if(i == 1)
        return 0.5;
    else 
        return m(i - 1) + i * 1.0 / (i + 1);
}