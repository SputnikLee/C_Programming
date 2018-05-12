#include <iostream>
using namespace std;

void sort(int *a,int l,int r)
{
	if(l >= r) 
	{
		return;
	}
    int k=a[l],i=l,j=r;
    while(i < j)
    {
        while(i < j && k <= a[j]) j--;
        a[i] = a[j];
        while(i < j && k >= a[i]) i++;
        a[j] = a[i];
    }
    a[i] = k;
    sort(a , l , i-1);
    sort(a , i+1 , r);
}

int main()
{
    int a[100],i,j,n;
    for( i=0 ;; ++i )
    {
        cin>>a[i];
        if(a[i] == -1)
            break;
    }
    n=i;
    sort(a,0,i-1);
    for( j=0 ; j<n ; ++j) cout<< a[j] << " ";
    cout<<"\n";
    return 0;
}
