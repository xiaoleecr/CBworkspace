#include <stdio.h>
#include <stdlib.h>

struct date{
    char month[3];
    int day;
};
int main()
{
    int i1,i2;
    int *p1,*p2,*p3;
    i1 = 5;
    p1 = &i1;
    i2 = *p1 / 2 + 10;
    p2 = p1;
    p2 = &i2;
    struct date today={"Mar",7};
    printf("today is %s,%i\n",today.month,today.day);
    printf("i1 = %i,\ni2 = %i,\n*p1 = %i,\n*p2 = %i\n",i1,i2,p1,p2);
    return 0;
}
