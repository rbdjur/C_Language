#include <stdio.h>

int main(void)
{
    //Declare a pointer to the file + declare an int, called len.
    FILE *fp = NULL;
    int len;

    //open the file, file.txt and allow to read.
    fp = fopen("file.txt", "r");

    //Create If condition regarding if the file failed.
    if (fp == NULL)
    {
        perror("error opening file");
        return (-1);
    }

    //Move the position of the file to the end of the file.
    fseek(fp,0,SEEK_END);

    //tell the user where they are located in the file 
    len = ftell(fp);

    //Close the file
    fclose(fp);

    printf("The total size of the file.txt is = %d bytes\n", len);

    return 0;
}