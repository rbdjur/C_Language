#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int number = 0;
    int * pnumber = NULL;

    number = 10;

    printf("number's address: %p\n", &number);
    printf("number's value: %d\n", number);

    pnumber = &number;

    printf("number's address: %p\n", (void*)&pnumber);
    printf("pnumber's size : %zd\n", sizeof(pnumber));
    printf("pnumber's value :%p\n", pnumber); // This is actually an address that pnumber holds
    printf("value pointed to %d\n", *pnumber);


    return 0;
    
    }