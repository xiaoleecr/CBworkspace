#include <stdio.h>
#include <stdlib.h>

void exchange(int * const p1,int * const p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a = 10,b = 20,*p1 = &a,*p2 = &b;
    printf("before:a = %i,b = %i\n",a,b);
    exchange(p1,p2);
    printf("after:a = %i,b = %i\n",a,b);
    return 0;
}
