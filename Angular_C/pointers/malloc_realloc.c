#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    // declare and initialize pointer, *str, with data type of har to NULL
    char * str = NULL;

    // memory allocate to str 15 bytes times the size of char on this system, typecast back a char
    str = (char*)malloc(15 * sizeof(char));

    // copy "jason" to the str, using strcpy()
    strcpy(str, "jason");

    printf("str is %s and address is %p\n", str, str); 

    //reallocate 10 more bytes (for a total of 25 bytes) to str
    //remember realloc() takes two parameters: (the existing pointer, the amount of memory reallocated).
    str = (char*)realloc(str, 25 * sizeof(char));

    //concatenate ".com" to str, using strcat()
    //strcat() takes two parameters: (the string you want to concatenate, "and the string you want to add to the first parameter")
    strcat(str, ".com");

    printf("String is %s and address is %p\n", str, str);

    free(str);

    return 0;
}