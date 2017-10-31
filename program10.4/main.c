#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    bool equalsString(const char str1[],const char str2[]){
        int i = 0;
        bool isEqual;
        while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
            ++i;

    }
    return 0;
}
