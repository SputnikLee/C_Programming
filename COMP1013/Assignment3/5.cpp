#include <stdio.h>

int cal(int i)
{
    if(i==1) return 2;//base case
    else return 3*cal(i-1)+2;
}

int main() {
    printf("%d",cal(16));
    return 0;
}