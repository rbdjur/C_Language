#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //define an array of data type long called multiple and initalize it with four values 15L, 25L, 35L, 45L
    long multiple[] = { 15L, 25L, 35L, 45L};

    //create a ptr, *ptr, of data type long and assign it the address of multiple
    long *p = multiple;

    //loop through the array
    for (int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); ++i)
    {
        printf("address p + %d (&multiple[%d]): %llu   *(p+%d) + value: %d\n", i, i, (unsigned long long)(p+i), i, *(p+i));

    }

    printf("\n Type long occuppies: %d bytes \n", (int)sizeof(long));
    return 0;
}