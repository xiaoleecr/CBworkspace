#include <stdio.h>
#include <stdbool.h>

//判断是否是字母
bool alphabetic(const char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;
    }else{
        return false;
    }
}

//输入读取一行
void readLine(char line[]){
    char c;
    int i = 0;
    do{
        c = getchar();
        line[i] = c;
        i++;
    }while(c != '\n');
    line[i-1] = '\0';
}

//单词统计
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
    char text[81];
    int totalWords = 0;
    bool endOfText = false;


    printf("Type in your text:\n");
    while(!endOfText){
        readLine(text);
        if(text[0] == '\0'){
            endOfText = true;
        }else{
            totalWords += wordCounter(text);
        }
    }
    printf("\n There are %i words in the text above",totalWords);
    return 0;
}
