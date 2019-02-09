#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    if (strncmp("astronomy", "astro", 5) ==0)
    {
        printf("found: astronomy\n");
    }

    if( strncmp("astounding", "astro", 5) == 0)
    {
        printf("found: astounding\n");
    }

    return 0;
}

