#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string){
    int length;
    const char *cptr = string;
    while(*cptr){
        ++cptr;
    }
    return  length = cptr - string;
}

int main()
{
    char string[] = "";

    printf("%i\n",stringLength(string));
    return 0;
}
