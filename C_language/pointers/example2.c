#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int number = 0;
    int *pnumber = NULL;

    number = 10;
    pnumber = &number;

    printf("pnumber's value (address) is %p\n", pnumber);
    //output will be an address
    printf("number's address is %p\n", &number);

    printf("pnumber's address is %p\n", (void*)&pnumber);


}
