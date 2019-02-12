#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Declare a pointer to the file + declare an int, called len.
    FILE *fp = NULL;
    // int len;

    //open the file, file.txt and allow to read.
    fp = fopen("file3.txt", "w+");

    //Create If condition regarding if the file failed.
    // if (fp == NULL)
    // {
    //     perror("error opening file");
    //     return (-1);
    // }

    
    //Add a string to file2.txt
    fputs("Hello, This is you", fp);

    //Move the position of the file to the beginning of the file.
    fseek(fp,7,SEEK_SET);

    //Where the new position on the file is at now, then add string to file2.txt
    fputs("How are you?", fp);

    //Close the file
    fclose(fp);

    return 0;
}

//This code at lines 24-27, actually over write the code. because in the file3.txt, only how are you is displayed, not the previous "Hello, this is you". This is because in fseek(), the third parameter is SEEK_SET which moves the position of the file back to the beginning. 