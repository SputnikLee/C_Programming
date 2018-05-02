#include<stdio.h>

int Fac(int n,int a)
{
	if(n == a) return n;
	else return a*Fac(n,a+1);
}

int main()
{
	int a;
	printf("Please input an integer:\n");
	scanf("%d",&a);
	printf("%d!=%d\n",a,Fac(a,1));
	return 0;
}