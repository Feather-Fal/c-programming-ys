/* 例4_16.c */
#include <stdio.h>
inline double square(double x){
 return x * x;
}
int main(void){
    double a, b, c;
    a = square(5.0);
    b = square(3.5 + 5.5);
    printf("a=%f\n", a);
    printf("b=%f\n", b);
    printf("c=%f\n", square(12.0));
    return 0;
}