#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 10;
    char c = 't';
    char *in_pointer = &c;
    c="4";
    c='f';
    printf("指针的值是：%i，指针指向的空间内的值是：%c",in_pointer,*in_pointer);
    return 0;
}
