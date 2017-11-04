#include <stdio.h>
#include <stdlib.h>

int main()
{
    void test(int *p){
        *p = 100;
    }
    int i = 50,*p = &i;
    printf("before:i=%i\n",i);
    test(p);
    printf("after:i=%i\n",i);
    return 0;
}
