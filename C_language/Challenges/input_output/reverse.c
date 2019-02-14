#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    // Declare an integer variable called len that will hold the number of bytes of the reverse.txt file.
    int len = 0;

    //declare an integer i, that will help us keep track of each iteration as we traverse from the end to the beginning.
    int i = 0;

    //Declare a file pointer
    FILE *fp = NULL;

    //Open the file and read from it.
    fp = fopen("reverse.txt", "r");

    //check if the file opened successfully.
    if (fp == NULL)
    {
        printf("The file did not open correctly");
        return(-1);
    } 
    else
    {
        printf("The file successfully opened.\n");
    };

    // Set the position of the file to the end of the file using fseek()
    fseek(fp, 0, SEEK_END);

    // find the position of the file using ftell()
    len = ftell(fp);

    //This value should be more than 0 because there are multiple lines in the reverse.txt
    printf("The size of the file is %d because this is the end\n", len);

    // Create a loop and the condition will be a while loop: as long as i, at 0, is less than the value of cnt, which is assigned the number of bytes in the file by ftell().
    while (i < len)
    {
        //Increment i by 1 to move to the next character.
        i++;
        // Then, use fseek() on the file, making i a negative signifying in reverse order, from the end of the file.
        fseek(fp, -i, SEEK_END);
        //print the character in the file
        printf("%c", fgetc(fp));
    };

    printf("\n");
    fclose(fp);
    fp = NULL;

    return 0;
}