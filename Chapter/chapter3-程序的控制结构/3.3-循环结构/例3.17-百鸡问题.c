/* 例3_17.c */
#include <stdio.h>
int main(void){
    int cock, hen;
    for(cock = 1; cock <= 19; ++cock){
        for(hen = 1; hen <= 31; ++hen){
            if(cock * 5 + hen * 3 + (100 - cock - hen) / 3 != 100)
                continue;
            if((100 - cock - hen) % 3 != 0)
                continue;
            printf("cock=%2d, hen=%2d, chick=%2d\n", cock, hen, 100 - cock - hen);
        }
    }
    return 0;
}