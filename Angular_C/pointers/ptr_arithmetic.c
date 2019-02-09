#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    // declare the arraySum function
    int arraySum(int * ptr, int const n);

    // create an integer array that holds 10 values
    int values[10]= { 3, 7, -9, 3, 6, -1 , 7, 9, 1, -5};

    // print the arraySum function
    printf("The value of the function is %i\n", arraySum(values,10));
    return 0;
}



//define the arraySum function
int arraySum(int * ptr, const int n)
{
    // define int type sum = 0 and *ptr
    int sum = 0;

    // define a pointer to the end of the array, make it an int and a constant.
    int * const arrayEnd = ptr + n;

    // create a for loop that loops to the address of each element to the address of the last element
    for ( ; ptr < arrayEnd ; ++ptr)
    {
        // add the dereference value ptr is holding, by accessing the values using *ptr.
        sum += *ptr;
        return sum;
    }
}

//Runs fine but does not result in correct answer.