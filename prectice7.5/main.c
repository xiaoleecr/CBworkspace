#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10] = {1,0,0,0,0,0,0,0,0,0},i,j;
    for(j = 0;j < 10;++j){
        for(i = 0;i < j;++i){
            numbers[j] += numbers[i];
        }
    }
    for(i = 0;i < 10;i++){
        printf("%i ",numbers[i]);
    }
}
