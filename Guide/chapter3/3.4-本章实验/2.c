#include <stdio.h>
int main(){
    double n, cost;
    scanf("%lf", &n);
    if(n > 50){
        cost = 50 * 0.53 + (n - 50) * 0.58;
        printf("cost = %.2f", cost);
    }else{
        cost = n * 0.53;
        printf("cost = %.2f", cost);
    }
    return 0;
}