#include <stdio.h>
int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a * b * c > 0 && a + b > c && a + c > b && b + c > a)
        printf("%f", a + b + c);
    else 
        printf("Invalid");
    return 0;
}