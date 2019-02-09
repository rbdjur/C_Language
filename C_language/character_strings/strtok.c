#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80] = "Hello how are you - my name is - Yo";
    const char s[2] = "-";
    char * token;

    // get first token
    token = strtok(str, s);

    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL,s);
    }




    return 0;
}