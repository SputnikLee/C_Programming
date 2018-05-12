#include <iostream>
using namespace std;

void sort(int *a,int l,int r)
{
	if(l >= r) //the base case is the left greater or equal to right 
	{
		return;
	}
    int k=a[l],i=l,j=r;
	//set a key number to compare with the other number
    while(i < j)//compare all the number safety
    {
        while(i < j && k <= a[j]) j--;
        a[i] = a[j];
		//find a number from right to left until the number smaller than key number
        while(i < j && k >= a[i]) i++;
        a[j] = a[i];
		//find a number from left to right until the number greater than key nubemr
    }
    a[i] = k;//set key number into the empty place
    sort(a , l , i-1);//sort from left to key number's place
    sort(a , i+1 , r);//sort from key number's place to right
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
    sort(a,0,i-1);//use quitsort to sort the array
    for( j=0 ; j<n ; ++j) cout<< a[j] << " ";
    cout<<"\n";
    return 0;
}
