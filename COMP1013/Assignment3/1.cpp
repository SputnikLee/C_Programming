#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i;
    scanf("%s", s);
    //read a string with %s
    for (i = 0; i < strlen(s); ++i) {
    	//if s[i] is a letter, output it 
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i]);
    }
    return 0;
}
