#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  word1 = 077u, word2 = 0150u, word3 = 0210u;
    printf("%o\n",word1 & word2);
    printf("%o\n",word1 & word1);
    printf("%o\n",word1 & word2 & word3);
    printf("%o\n",word1 & 1);
    return 0;
}
