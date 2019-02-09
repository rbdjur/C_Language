#include <stdio.h>
#include <stdlib.h>


// Define a function, called copyString, that takes two pointers as parameters with data types char.

// 
void copyString(char * to, char * from)
{
    while (*from) // the null character is equal to the value of 0, so it will jump out then
    {
        // increment after the statement but assigns each index array of the first parameter to second parameter
        *to++ = *from++;
    }

    *to = '\0';

}

int main(void)
{
    char string1[] = "A string to be copied.";
    char string2[250];

    copyString(string2, string1);

    printf("%s\n", string2);

    return 0;
}
//Successfully copied string1[] to string2[250]. 