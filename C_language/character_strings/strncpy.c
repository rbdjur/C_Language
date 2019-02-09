#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "My name is Hello";

    char temp[50];

    // This moves myString into the character array of temp. 
    // the third argument is the size of temp - 1 because we do not want to account for the terminating character.
    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The length is: %lu\n", strlen(myString));

    printf("The string is: %s\n", temp);

    return 0;
}