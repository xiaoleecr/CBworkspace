#include <stdio.h>
#include <stdlib.h>

void copyArray(char *to,char *from){
    for(;*from != '\0';){
        *to++ = *from++;
    }
    *to = '\0';
}

int main()
{   char from[] = "Hello world!";
    char to[30];
    copyArray(to,from);
    printf("%s",to);
    return 0;
}
