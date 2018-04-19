#include <stdio.h>

int main() {
    int i,j;
    for(i=0 ; i<5 ; ++i)
    {
        for (j = 0; j < 10-2*i; ++j) {
            if (j % 2 == 0)
                printf("#");
            else printf("*");
        }
        printf("\n");
    }
    printf("#\n");
    return 0;
}