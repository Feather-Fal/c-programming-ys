#include <stdio.h>
int main(){

    int n,g,s,b,q;
    scanf("%d",&n);
    g=(n%10+9)%10;
    s=(n/10%10+9)%10;
    b=(n/100%10+9)%10;
    q=(n/1000%10+9)%10;
    printf("%d\n",s*1000+g*100+q*10+b);

    return 0;
}