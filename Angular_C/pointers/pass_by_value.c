#include <stdlib.h>
#include <stdio.h>

//define function swap that can be assigned any data type to be returned.
void swap(int a, int b)
{
    //declare a third variable to hold the value of a temporarily
    int temp;
    a = temp;

    // assign the value of b to a
    a = b;

    // assign temp to b, because b now has the value of a
    b = temp;

    return;
}

int main(void)
{
    /* local variable definition */
    int a = 100;
    int b = 200;

    // print the values of a and b before utilizing the function
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    //call the swap function and pass a and b
    swap(a,b);

    //print the values of a and b after swap (they remain the same)
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}