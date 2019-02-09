#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare an array to hold a string
    char input[10];
    printf("Please input name:");
    scanf("%s", input);


    printf("You entered %s\n", input);
    // Learn how to use fgets()



    return 0;
}

// Notes:

// in "scanf("%s", input);", we do not need to reference the address of input because it is a string/character and not an integer.  If input asked for an integer, we would need to use the "&" before the variable because the address points to the value stored.

// 'x' does not equal "x" because 'x' is a character and "x" is a derived character of an array. Furthermore, "x" actually consists of two characters: 'x' and '\0' , the terminating character.

