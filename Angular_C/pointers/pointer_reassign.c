#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    long num1= 0L;
    long num2 = 0L;
    long *pnum = NULL;

    // get address of num1
    pnum = &num1;
    // assign pnum to 2L (L notifies it is a Long data type)
    *pnum = 2L; 

    // increment num2 by one
    ++num2;

    //add num 1 to num 2
    num2 += *pnum;

    // Get address of num2, by reassigning pnum to num2 address
    pnum = &num2;

    //increment num 2 indirectly, num2 = 4
    ++*pnum;

    //print the numbers

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num 2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    return 0;
}

// Success