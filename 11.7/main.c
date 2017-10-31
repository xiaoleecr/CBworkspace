#include <stdio.h>
#include <stdlib.h>

void sort(int *array,int n){
    int temp,*b,*arrayEnd = array + n;
    for(;array < arrayEnd;array++){
        for(b = array + 1;b < arrayEnd;b++){
            if(*array > *b){
                temp = *array;
                *array = *b;
                *b = temp;
            }
        }
    }
}

int main()
{
    int array[13] = {6,4,21,8,45,65,23,21,82,5,26,83,47};
    sort(array,13);
    int *end = array + 13;
    int *a = array;
    for(a;a < end;++a){
        printf("%i,",*a);
    }

    return 0;
}
