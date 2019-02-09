#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declare a function
int square (int * xyz);

int main(void)
{

    // a random number
    int num = 3;
    // initialize a pointer to NULL value
    int * sq = NULL;

    // assign address of num to sq.
    sq=&num;

    square(sq);
    return 0;
}

// define a function, called square, that returns an integer value that has been squared.
int square(int * xyz)
{
    *xyz *= *xyz;
    printf("%d\n", *xyz);

    return *xyz;
}