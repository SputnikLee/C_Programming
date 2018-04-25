#include<stdio.h>

int Fac(int a)
{
	int i,fac=1; 
	for(i=1;i<=a;++i) fac*=i; //calculate the factorial number
	return fac;
}

int main()
{
	int n=-1;
	printf("Please input an integer: ");
	do scanf("%d",&n);
	while(n<=0); //input number until it is a positive number
	printf("The factorial of %d is %d.\n",n,Fac(n));
	return 0;
}