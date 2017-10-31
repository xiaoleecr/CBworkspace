#include <stdio.h>
#include <stdlib.h>

int compareStrings(char *str1,char *str2){
    int result = 0;
    while(*str1 == *str2 && *str1 != '\0' && *str2 != '\0'){
        str1++;
        str2++;
    }
    if(*str1 > *str2){
        result = 1;
    }else if(*str1 < *str2){
        result = -1;
    }
    return result;
}
int main()
{
    char *str1 = "abstract";
    char *str2 = "abstrafct";

    printf("%i\n",compareStrings(str1,str2));
    return 0;
}
