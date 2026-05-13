#include <stdio.h>
int main(void){
    double father, mother, boy, girl;
    scanf("%lf%lf", &father, &mother);
    boy=(father+mother)*1.08/2;
    girl=(father+0.923*mother)/2;
    printf("%.1f %.1f\n", boy, girl);
    return 0;
}