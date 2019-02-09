#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "The quick brown fox."; // string to be searched
    char ch = 'q'; // character we are looking for 
    char *pGot_char = NULL; // pointer initalized to 0.
    pGot_char = strchr(str,ch);
    // stores address where ch is found, 4th indx of string.

    printf("%s\n", pGot_char);


    return 0;
}

//Notes

// strchr() searches a given string for a specified character.

// first argument to the function is the string to be serached

// second argument is character you're looking for.  

//The function will search the string starting at the beginning and return a pointer to the first position to the string where the character is found. 
// the address of this position in memory
// is of type char * dsecribed as "pointer to char"

//If character is not found, function returns a special value NULL which means pointer doesnt point to anything.

