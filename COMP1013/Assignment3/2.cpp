#include <stdio.h>

int main() {
    int arr[10]={3,10,15,30,55,77},ins,i;
    scanf("%d",&ins);
	//read an inset nubmer 
    for(i=0 ; i<6 ; ++i)
    {
		//if the number between two number or small than the first number, output it
        if(arr[i]>ins && (arr[i-1] <=ins || i==0)) printf("%d ",ins);
        printf("%d ",arr[i]);

    }

    return 0;
}
