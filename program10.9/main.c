#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct entry{
    const char word[15];
    const char identify[50];
};

bool equalString(const char str1[],const char str2[]){
    int i = 0;
    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'){
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
        return true;
    }else{
        return false;
    }
}

int lookUp(struct entry dictionary[],char word[],int entries){
    for(int i = 0;i < entries;i++){
        if(equalString(word,dictionary[i].word)){
            return i;
        }
    }
    return -1;
}

int main()
{
    const struct entry dictionary[100] = {
        {"aardvark","a burrowing African mammal"},
        {"abyss","a bottomless pit"},
        {"acumen","mentally sharp;keen"},
        {"addle","to become confuse"},
        {"aerie","a high nest"},
        {"affix","to append; attach*"},
        {"agar","a jelly made from seaweed"},
        {"ahoy","a nautical call of greeting"},
        {"aigrette","an ornamental cluster of feathers"},
        {"ajar","partially opened"}
    };
    char word[10];
    int entries[10];
    int entry;
    printf("enter word\n");
    scanf("%l4s",word);
    entry = lookUp(dictionary,word,entries);
    if(entry != -1){
        printf("%s\n",dictionary[entry].identify);
    }else{
        printf("null");
    }
    return 0;
}
