#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Search for a substring
    char text[] = "Every dog has his day";
    char word[] = "dog";

    char * pFound = NULL;
    pFound = strstr(text,word);

    printf("%s\n", pFound);
    //This will print "dogh as its day" because the strstr() searches the string where dog is found, then returns the rest of the string from that location dog is in (7th character in text).

    // tokenizing a string
    char str[80] = "Hello how are you - my name is - Yo";
    const char s[2] = "-";
    char * token;

    //get first token
    token = strtok(str, s);

    //walk through other tokens
    while (token != NULL)
    {
        printf("%s \n", token);

        token = strtok(NULL, s);
    }


    return 0;
}

//Notes

//1. strstr() searches one string for the first occurence of a sub-string.  It returns a pointer to the position in the first string where the substring is found.  IF no match, returns NULL.

// first argument is the string to be searched.
// second argument is substring you're looking for. 


//2. a token is a sequence of characters within a string that is bound by delimiter

// A delimiter can be anything, but should be unique to teh string
    // - such as spaces, commas, and period.

// breaking a senetence into words is called tokenizing

//strtok() = tokenzing a string

// takes two arguments:
// string to be tokenzied and string containing all delimiter characters.

