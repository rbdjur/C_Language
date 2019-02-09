#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
    long value = 9999L;
    //This declares the value pointed to by the pvalue to be const.
    const long * pvalue = &value; //Address is 0x7ffee8715a48

    printf("%p\n", pvalue);

    long number = 8888L;

    //The pointer itself is not a constant so you can change what it points to.
    //Furthermore we are changing the address of the pointer and not the actual value.
    pvalue = &number; // Address is 0x7ffee8715a38

    printf("%p\n", pvalue);




    return 0;
}