#include <stdio.h>
#include <stdlib.h>

void readLine(char *buffer){
    char c;
    do{
        c = getchar();
        *buffer = c;
        buffer++;
    }while(c != '\n');
    *buffer = '\0';
}

int main()
{
    char line[80];
    readLine(line);

    printf("%s\n",line);
    return 0;
}
