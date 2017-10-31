#include<stdio.h>
int main(void)
{
int *p;
int x = 1001;
p = &x;
int *p1;
int y = *p;

printf("%i,%i\n",*p,y);
printf("what's up baby?");
return 0;
}
