int stringLength(char word[])
{
	int i;
	for(i=0;word[i]!='\0';++i);
	return i;
}