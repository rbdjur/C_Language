#include <stdio.h>
#include <stdio.h>

int main(void)
{
    // create/define a struct
    struct date {
        int day;
        int month;
        int year;
    };

    // now use this struct defination and declare a structure that will be modeled after this struct called date, lets call this structure present.
    struct date present;

    // Now that we declared a structure called present that is modeled after the structure date, lets give more context by assigning values to day, month, year.

    present.day = 07;
    present.month = 02; 
    present.year = 2019;

    // Now lets print out the MM/DD/YYYY

    printf("Today's date is %i/%i/%i\n", present.month, present.day, present.year);
    return 0;
}