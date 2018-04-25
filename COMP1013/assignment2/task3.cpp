#include <stdio.h>
#include <math.h>

/*
1. find how many digit is the number
2. analyse the number is perfect square pr not
*/

int main() {
    int a,n=0,k;
    scanf("%d",&a);
    k=a;
    while( k>0 )
    {
        k/=10;
        n++;
    }//find how many digit it got
    printf("%d got %d digit(s)\n",a,n);
    if(sqrt(a)==int(sqrt(a))) printf("%d is a perfer square ,%d = %d * %d\n",a,a,int(sqrt(a)),int(sqrt(a)));
    else printf("%d is not a perfect square\n",a);
    //if ¡Ìnumber is a int ,it's a perfect square  
    return 0;
}
