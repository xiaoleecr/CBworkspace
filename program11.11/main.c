#include <stdio.h>
#include <stdlib.h>

int arraySum(int array[],int n){
    int sum,*ptr;
    int *ptrEnd = array + n;
    for(ptr = array;ptr < ptrEnd; ++ptr){
        sum += *ptr;
    }
    return sum;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *p = a;
    printf("%i\n",arraySum(a,10));
    printf("%i",*(p+3));
    return 0;
}
