#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y)
{
    if(y == 0)
        {
            return x;
        }

    return gcd(y, x % y);
}

int main(int argc, char * argv[])
{
    int a, b;
    printf("Please enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("The greatest common denominator of %d and %d is %d\n", a, b, gcd(a,b));





    // printf("Test line, to see what the value of a is %d\n", a);
    // printf("Test line, to see what the value of b is %d\n", b);
    // a = 98;
    // b = 56;
    // printf("GCD of %d and %d is %d\n", a, b, gcd(a,b));
    return 0;
}

// Success.