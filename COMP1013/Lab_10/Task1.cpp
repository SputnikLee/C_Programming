#include<stdio.h>

int power(int n)
{
	if(n==0) return 1;//if n=0,return 1
	else return 2*power(n-1);//else return n*2^(n-1)
}

int main()
{
	int a;
	printf("Please input the exponent of 2:\n");
	scanf("%d",&a);
	printf("2 to the power of %d is %d\n",a,power(a));
	return 0;
}