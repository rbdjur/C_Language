#include <stdio.h>

int main(void)
{
    // Declare the variables and their data types we want to use
    FILE *fp = NULL;
    int ch;

    //assign fp to open file.txt , with read + writing priviledges
    fp = fopen("file.txt","w+");

    //Once file opened, lets loop through characters 33 - 100 on the ASCII table
    for (ch = 33; ch <= 100; ch++)
    {
        fputc(ch,fp);
    }

    fclose(fp);
    return 0;
}