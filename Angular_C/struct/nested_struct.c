#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // struct date;
    // struct thetime;
    // struct dateAndTheTime;
    // struct dateAndTheTime event;

    // define a struct for date
    struct date {
        int day;
        int month;
        int year;
    };

    // define a struct for time
    struct thetime {
        int hours;
        int minutes;
        int seconds;


    };

    //define another struct called event, that will hold
    struct dateAndTheTime
    {
        struct date sdate;
        struct thetime sthetime;
    };

    // Declare a structure, called event, that 
    struct dateAndTheTime events = {{2, 1, 2015}, {00, 30, 3}};
 


    printf("Date is : %d and the Time is : %d\n", events.sdate, events.sthetime);
    //set the date to be February 1, 2015 at 3:30.


    return 0;
}