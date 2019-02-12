#include <stdio.h>

int main()
{
    FILE *fp;
    char str[60];

    //open the text.file using fopen().
    // read the file.
    fp = fopen("file.txt", "r");


    // Check to see if fp is equal to NULL, if so then there is an error because opening a file does not result in a 0, NULL value.
    if (fp == NULL)
    {
        printf("There is an error opening file");
        exit(-1);
    }

    //Read from the file.txt file.
    // create an if condition that says if fgets(), which is the way to read a string, str, from a stream (fp), lets read 60 characters from that file, does not equal to NULL (0)
    if(fgets(str,60,fp) != NULL)
    {
        printf("%s", str);
    }

    //Close the file using fclose()
    fclose(fp);

    // Make sure no value is associated to fp. Similar to like freeing a character array pointer. 
    fp = NULL;

    return 0;
}