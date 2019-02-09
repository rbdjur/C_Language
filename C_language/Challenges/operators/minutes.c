#include <stdio.h>

int main(int argc, char * argv[])
{
    // Declare the variables and their types that will be used throughout the program
    int minutesEntered = 0;
    double minutesInYear = 0;
    double years = 0.0;
    double days = 0.0;

    //Use printf() to ask the user to input minutes
    printf("Please enter the number of minutes:");

    // use scanf() to get user input
    //Specify the type of data type you want the input to be stored as, followed by the variables, minutesEntered
    scanf("%d", &minutesEntered);

    // define minutesInYear to give the amount of minutes in a year
    // 60 minutes in an hour, 24 hours in a day, 365 days in a year
    minutesInYear = (60 * 24 *365);

    // The minutes user enters divided by the minutes in a year to get the years
    years = (minutesEntered / minutesInYear);

    // Minutes entered divided by 60 minutes in an hour, 24 hours in a day.
    days = (minutesEntered / 60.0 ) / 24.0;

    printf("%d minutes\n is approximately %f years\n and %f days\n", minutesEntered, years, days);


    return 0;
}