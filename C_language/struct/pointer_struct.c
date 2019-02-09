#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // define a struct, called date.
    struct date 
    {
    int month;
    int day;
    int year;
    };

    //declare today to emulate struct date, as today and declare a pointer, *datePtr
    struct date today, *datePointer;

    // assign the address of the today struct date to the pointer datePtr
    datePointer = &today;

    //assign values to the members using the -> notation
    datePointer->month = 9;
    datePointer->day = 25;
    datePointer->year = 2015;

    printf("Todays date is %d %d %d\n", datePointer->month, datePointer->day, datePointer->year);

    return 0;
}

//Success

