#include <stdio.h>
#include <stdlib.h>

struct entry{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *target,struct entry *obj){
    *obj->next = *target->next;
    *target->next = *obj;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
