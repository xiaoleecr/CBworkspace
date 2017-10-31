#include <stdio.h>
#include <stdlib.h>

void sort(int *pa,int *pb,int *pc){
    int temp = 0;
    if(*pa > *pb){
        temp = *pa;
        *pa = *pb;
        *pb = temp;
    }
    if(*pb > *pc){
        temp = *pb;
        *pb = *pc;
        *pc =temp;
    }
    if(*pa > *pb){
        temp = *pa;
        *pa = *pb;
        *pb = temp;
    }
}

int main()
{
    int a = 13,b =14,c = 114,
        *pa = &a,*pb = &b,*pc = &c;
    sort(pa,pb,pc);
    printf("a=%i,b=%i,c=%i\n",*pa,*pb,*pc);
    return 0;
}
