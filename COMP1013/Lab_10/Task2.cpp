#include<stdio.h>

int ZeroInBinary(int a)
{
	if(a==0) return 0;
	else if(a%2==0) return 1+ZeroInBinary(a/2);
	else return ZeroInBinary(a/2);
}

int main()
{
	int a;
	printf("Please input an integer:\n");
	scanf("%d",&a);
	printf("There are %d zero in the binary representation of %d\n",ZeroInBinary(a),a);
	return 0;
}