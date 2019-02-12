#include <stdio.h>

int main()
{
    FILE *fp;
    int c;

    //open the text.file using fopen().
    // read the file.
    fp = fopen("file.txt", "r");


    // Check to see if fp is equal to NULL, if so then there is an error because opening a file does not result in a 0, NULL value.
    if (fp == NULL)
    {
        printf("There is an error opening file");
        exit(-1);
    }


    //Read a single character of the file.txt file.
    // To track this, assign the c integer from above to fgetc() because fgetc() returns a value if successfully reads a character from the designated file (fp). 
    // Then we want to make sure the integer value of c is not equal to the EOF.

    // If EOF is -1, it was unsuccessful getting to last character, but if EOF is equal to 0 then it was succesful getting to last character

    // So while c value does not equal the value of EOF, print each character from the text.file

    while ( (c=fgetc(fp)) != EOF )
    {
        printf("%c", c);
    }

    //Close the file using fclose()
    fclose(fp);

    // Make sure no value is associated to fp. Similar to like freeing a character array pointer. 
    fp = NULL;

    return 0;
}

 // For the while loop. Check to see if the file action (fp = fopen();) is not = to EOF. If it is not equal to EOF (!= EOF), then print out the program is not working, and exit(-1)