#include <stdio.h>
#include "Power2.h"

int main() {
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    //output Power2(n1)+Power2(n2)+Power2(n3)
    printf("%d\n",Power2(n1)+Power2(n2)+Power2(n3));

    return 0;
}