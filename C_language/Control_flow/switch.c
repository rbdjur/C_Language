#include <stdio.h>

int main(int argc, char * argv[])
{
    enum today; 
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch(today)
    {
       case Sunday:
        printf("Today is sunday\n");
        break;

       case Monday:
       printf("Today is Monday\n");
       break;

       default: 
        printf("None of the days are avilable\n");
        break;
    }


    return 0;
}