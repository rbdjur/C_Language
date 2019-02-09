#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // This is an instance of a structure called, location, that is declared at the same time it is defined.  Location is a variable of type places.
    struct places
    {
        char city[20];
        char state[20];
        char country[20];
    } location; 

    //use strcpy to assign a string to the member of a struct
    strcpy(location.city, "San Francisco");
    strcpy(location.state, "California");
    strcpy(location.country, "USA");

    printf("The city I live in is %s, the state I live in is %s, and the country I live in is %s\n", location.city, location.state, location.country);

    //Another way is to give a structure that you dont have to give a structure a tag name
    struct 
    {
        char middle_school[8];
        char highschool[8];
        char college[8];
    } schools;

    //This is an anonymous function but a disadvantage of htis is that you can no longer define further instances of the structure in another statement. 

    strcpy(schools.middle_school, "TCMS");
    strcpy(schools.highschool, "DHS");
    strcpy(schools.college, "SJSU");


    printf("The middle school I went to was %s, the highschool I went to was %s, the college I went to was %s\n", schools.middle_school, schools.highschool, schools.college);


    return 0;
}