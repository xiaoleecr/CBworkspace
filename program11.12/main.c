#include <stdio.h>
#include <stdlib.h>

int arraySum(int *array,int n){
    int sum = 0;
    int *end = array + n;
    for(;array < end;array++){
        sum = *array + sum;
    }
    return sum;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10},*p;
    p = a;

    printf("%i\n",arraySum(a,10));
    return 0;
}
