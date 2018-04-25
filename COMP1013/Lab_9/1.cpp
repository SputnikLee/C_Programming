#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int tatol=0;
    while(scanf("%s",&word)!=EOF)
    {
        if(strcmpi(word,"End")==0) break;
        tatol+=strlen(word);
    }
    printf("There are %d letters in the sentence.\n",tatol);
    return 0;
}