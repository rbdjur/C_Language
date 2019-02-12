#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3 character arrays 10 characters big
    char str1[10], str2[10], str3[10];
    int year;
    // Pointer for file type
    FILE *fp;

    // Open a file for reading and writing
    fp = fopen("file2.txt", "w+");

    // Add to the file if fp is not equal to NULL using fputs()
    if (fp != NULL)
    {
        fputs("Hello how are you?",fp);
    }


    // Bring the file back to the beginning
    rewind(fp);

    // reads formatted data, 3 %s for the 3 character arrays and %d for the integer.

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("str1 is |%s|", str1);
    printf("str2 is |%s|", str2);
    printf("str3 is |%s|", str3);
    printf("year is |%d|", year);


    // close the file
    fclose(fp);







    return 0;
}