#include <stdio.h>
#include <math.h>

/*
To analyse a input number is prime number or not
*/

int main() {
    int n, i;
    scanf("%d", &n);
    if (n <= 1) {
        printf("It's not a prime number.\n");
    }
    if (n == 2) {
        printf("2 is a prime number.\n");
    }
    for (i = 2; i <= sqrt(n) + 1; ++i) {
        if(n%i==0) //if the number could be mod by a number, it's not a prime number
        {
            printf("%d is not a prime number\n",n);
            return 0;
        }
    }
    printf("%d is a prime number",n);
    return 0;
}
