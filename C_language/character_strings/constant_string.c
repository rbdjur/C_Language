#include <stdio.h>
#include <stdlib.h>
//1. 
#define TAXRATE .015

int main()
{
    //2.
    const int MONTHS = 12;

    printf("%d\n", MONTHS);


    return 0;
}

//Notes:

//1. Wherever TAXRATE is located inside the main functin, it will be replaced by .015.

//2. The "const" in front of a declaration or initialization of a data type variable means that it cannot be modified by the program. It will remain constant to what it is/has been assigned to.