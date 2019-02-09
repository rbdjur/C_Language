#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //1. copying strings
    char src[50];
    char dest[50];

    strcpy(src, "This is source.");
    strcpy(dest, "This is destination.");

    printf("%s\n", src);
    printf("%s\n", dest);

    //2. string concatenation
    char myString[] = "myString";
    char input[6];

    printf("Enter a string to be concatenated with %s is \n", myString);
    scanf("%s\n", input);
    printf("input now holds %s\n", input);

    strcat(input,myString);

    printf("input now holds its contents plus the contents of mystring[].  Which reads %s\n", input);


    
    return 0;
    }

// Returns an error.  Something wrong with scanf() and input as well as strcat(input, mystring);

//Notes: 
//1. strcpy(the variable you want to hold the string, "the string");
// This allows you to put strings inside char array variables.

//2. 
// strcat (destination, src, amount of characters you want to read).

// The first argument destination, will hold its original contents and add the src contents to its contents. 

//The second argument is what you wat to add to the desintation (argument 1)

// The third argument is an integer number that specifies how many characters you want to read. 