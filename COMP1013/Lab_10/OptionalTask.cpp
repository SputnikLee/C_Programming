#include<stdio.h>

void sort(int *a , int left , int right)
{
	int i = left , j = right , k = a[left];
	if(left >= right)
		return;
	while(i<j)
	{
		while( i<j && a[j] >= k ) j--;
		a[i]=a[j];
		while( i<j && a[i] <= k ) i++;
		a[j]=a[i];
	}
	a[i] = k ;
	sort(a,left,i-1);
	sort(a,i+1,right);
}

int main()
{
	int a[50],n,i;
	printf("Please input a positive integer.Input -1 to stop\n");
	for(i=0 ; ; ++i)
	{
		scanf("%d",&a[i]);
		if(a[i] == -1) break;
	}
	sort(a,0,i-1);
	n=i;
	for(i=0 ; i<n ; ++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}