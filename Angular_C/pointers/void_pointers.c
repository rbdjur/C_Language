#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void * vptr;

    vptr = &i;
    printf("The value of i = %d\n", *(int*)vptr);

    vptr = &f;
    printf("The value of i = %.2f\n", *(float*)vptr);

    vptr = &ch;
    printf("The value of i = %c\n", *(char*)vptr);

    return 0;
}