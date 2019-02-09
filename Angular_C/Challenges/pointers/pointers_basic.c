#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //1. 
    //initialize an integer variable to a hard-coded number
    int num = 5;
    // initalize an integer pointer to NULL
    int * arrow = NULL;

    //2. assign the address of, integer num, to the pointer, arrow.
    arrow = &num;

    //3. 
    // print out the address of num
    printf("the address of num is %p\n", &num);
    //Print the address of pointer
    printf("address of pointer (arrow) is %p\n", &arrow);
    // Print the value of the pointer
    printf("the value of pointer (arrow) is %p\n", arrow);
    // Print the value of what the pointer is pointing to
    printf("the value of what the pointer (arrow) is pointing to is %d\n", *arrow);



    return 0;
}

//Success