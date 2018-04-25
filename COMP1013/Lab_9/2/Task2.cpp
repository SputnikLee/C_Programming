#include<stdio.h>
#include "stringLength.h" //use the head file stringLength.h wrote by myself

int main()
{
	char word[50];
	scanf("%s",word);
	printf("%d",stringLength(word)); //use the function stringLength in the head file
	return 0;
}