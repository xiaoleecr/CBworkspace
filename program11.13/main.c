#include <stdio.h>
#include <stdlib.h>

void copyString(char *to,char *from){
    for(;*from != '\0';from++,to++){
        *to = *from;
    }
    *to = '\0';
}

int main()
{
    char from[]={"let's talk about c language "};
    char to[50];
    copyString(to,from);
    printf("%s\n",to);
    return 0;
}
