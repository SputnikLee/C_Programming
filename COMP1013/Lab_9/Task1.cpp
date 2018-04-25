#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int tatol=0;
    while(scanf("%s",&word)!=EOF)//input the words if this is not end of the file
    {
        if(strcmpi(word,"End")==0) break; //compare the word with "end",strcmpi can ignore capitalized
        tatol++; //strlen can calculate the length of the word
    }
    printf("This string has %d words.\n",tatol);
    return 0;
}