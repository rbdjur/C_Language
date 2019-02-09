#include <stdint.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int count = 43;

    //This ensures the pointer always points to the same thing.
    int * const pcount = &count; //The address stored in a pointer cannot be changed.

    // int item = 34;
    // pcount = &item; // error because attempt to change constant pointer

    //The value can still be changed by changing item to a new number.

    return 0;
}