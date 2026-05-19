#include <stdio.h>
int main(){
    double a=0,b=0;
    for(int i=0; i<6; i++){
        a=(1000+b)*(1+0.00417);
        b=a;
    }
    printf("%.2f",b);
    return 0;
}