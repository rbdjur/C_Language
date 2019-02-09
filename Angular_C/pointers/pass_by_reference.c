#include <stdlib.h>
#include <stdio.h>

//define function swap that can be assigned any data type to be returned.
void swap(int * fp, int * sp)
{
    //declare a third variable to hold the value of a temporarily
    int temp;
    *fp = temp;

    // assign the value of b to a
    *fp = *sp;

    // assign temp to b, because b now has the value of a
    *sp = temp;

    return;
}

int main(void)
{
    /* local variable definition */
    int first_param = 100;
    int second_param = 200;

    // print the values of a and b before utilizing the function
    printf("The value of a is %d\n", first_param);
    printf("The value of b is %d\n", second_param);

    //call the swap function and pass a and b
    swap(&first_param,&second_param);

    //print the values of a and b after swap (they remain the same)
    printf("The value of a is %d\n", first_param);
    printf("The value of b is %d\n", second_param);

    return 0;
}