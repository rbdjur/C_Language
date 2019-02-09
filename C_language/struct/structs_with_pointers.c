#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //define a struct called intPtrs
    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    // declare a pointer to the intPtrs struct
    struct intPtrs pointer;

    // declare values i1 and i2 and assign 100 to i1.
    int i1 = 100;
    int i2;

    //access the members of pointer, *p1 and *p2, and assign them the addresses of i1 and i2.
    pointer.p1 = &i1;
    pointer.p2 = &i2;

    // Assign the value of pointer.p2 to a value, -97. Make sure to dereference the pointer because we want access to the value of p2.
    *pointer.p2 = -97;

    printf("The value of i1 = %i and the value of pointer.p1 = %i\n", i1, *pointer.p1);
    printf("The value of i2 = %i and the value of pointer.p2 = %i\n", i2, *pointer.p2);

    return 0;
}