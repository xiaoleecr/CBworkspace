#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct date{
        int month;
        int day;
        int year;
    };
    struct date today,*todayPtr;
    todayPtr = &today;
    todayPtr -> month=9;
    todayPtr -> day=25;
    todayPtr -> year=2004;
    printf("today's date is %i %i %i",todayPtr->month,todayPtr->day,todayPtr->year);
}
