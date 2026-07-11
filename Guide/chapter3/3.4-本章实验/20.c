#include <stdio.h>
int main(){
    int men,women,child;
    for(men = 0;men <= 15;men++){
        for(women =0;women<=22; women++){
            child = 45-men-women;
            if(men*3+women*2+child/2==45&&child%2==0)
                printf("men=%d, women=%d, child=%d\n",men,women,child);
        }
    }
    return 0;
} 