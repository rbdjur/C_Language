#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    // Declare a pointer to a file to NULL
    FILE *fp = NULL;
    FILE *fp1 = NULL;

    //Declare a char character representing the characters that will be needed from FILENAME
    char ch;

    //Open the file, characters_upper.txt with read priviledges
    fp = fopen("characters_upper.txt","r");

    //Determine if the file was opened successfully or not.  Remember if the file was not opened successfully using fopen(), then NULL is returned.

    //Check to see if fp == NULL, if so, file unsuccessfully opened.
    if (fp == NULL)
    {
        printf("The file, fp, did not successfully open\n");
        return(-1);
    }
    else 
    {
        printf("The file, fp, successfully opened for reading.\n");
    }

    //Open the second file, temp.txt with write priviledges
    fp1 = fopen("temp.txt", "w");

    //Check to see if fp1 == NULL, if so, file unsuccessfully opened.
    if (fp1 == NULL)
    {
        printf("The file, fp1, did not successfully open\n");
        return(-1);
    }
    else 
    {
        printf("The file, fp1, successfully opened for writing.\n");
    }



    // Create a loop as long as the characters in fp are not EOF
    while ( (ch = fgetc(fp)) != EOF)
    {
        // if the condition of characters in fp are lowercase
        if(islower(ch)) 
        {
            // Convert characters into upper case.
            ch = ch-32;
            // printf("%c", ch);
        }
        // We are in this while loop because these conditoins are true, we ant to write our characters, ch, from fp.  Use the fputc() to put hem into the temp.txt file represented by fp1.
        fputc(ch, fp1);
    }

    //Close the two files
    fclose(fp);
    fclose(fp1);

    //Rename the files
    rename("temp.txt","characters_upper.txt");

    //Remove temp.txt
    remove("temp.txt");

    // Open up the fp file again, but this time only set priviledges to read
    fp = fopen("characters_upper.txt", "r");

    //Check again if the file successfully opened or not
    if (fp == NULL)
    {
        printf("The file did not open successfully after capitalization");
        return(-1);
    }
    else
    {
        printf("The file opened successfully after capitalization\n");
    }

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    fp = NULL;
    fp1 = NULL;
    
    return 0;
}
//Successful