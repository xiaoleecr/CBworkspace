#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool alphabetic(const char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;
    }else{
        return false;
    }
}

int wordCounter(const char string[]){
    int i, count = 0;
    bool lookingForWord = true,alphabetic(const char c);
    for(i = 0;string[i] != '\0';i++){
        if(alphabetic(string[i])){
            if(lookingForWord){
                count++;
                lookingForWord = false;
            }
        }else{
            lookingForWord = true;
        }
    }
    return count;
}
int main()
{
    int wordCounter(const char string[]);
    const char string[] = "hello world";
    int a = wordCounter(string);
    printf("%i",a);
    return 0;
}
