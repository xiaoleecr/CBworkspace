#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 10;
    char c = 't';
    char *in_pointer = &c;
    c="4";
    c='f';
    printf("ָ���ֵ�ǣ�%i��ָ��ָ��Ŀռ��ڵ�ֵ�ǣ�%c",in_pointer,*in_pointer);
    return 0;
}
