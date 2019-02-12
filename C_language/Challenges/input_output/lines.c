#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Declare a file pointer, integer variable pos for the fgetc, and integer num for the lines.
    FILE *fp = NULL;
    char pos;
    int num = 0;

    //Open the file using fopen() with priviledges set to read
    fp = fopen("file.txt", "r");

    // If the file did not open and read successfully, notify the user.  If the file opened and read successfully, notify the user.
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return(-1);
    }
    else {
        printf("The file opened and read successfully\n");
    }

    // Create a conditional statement.  A while statement works best because we want to continue to print characters as long as a certain condition is true.

    // fgetc() is a function that takes a pointer to a file, returns a character from a file but read as an int.  This explains why inside the while loop, printf() has %c , pos.

    while ( (pos = fgetc(fp)) != EOF)
    {
        if (pos == '\n')
        {
            num++;
            printf("The number of lines are %d\n", num);
        }
        printf("The character is %c\n", pos);
    }

    fp = NULL;
    fclose(fp);

    return 0;
}

//Why is this printing to ten and why are the characters printed on every odd?