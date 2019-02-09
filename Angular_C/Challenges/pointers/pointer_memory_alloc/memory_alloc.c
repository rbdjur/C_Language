#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // its working + first instruction
    printf("Inside driver code\n");

    // declare a variable called entered_int. 
    int entered_int;

    // declare a pointer called character_pointer of type char
    char * character_pointer = NULL;

    //Use scanf() to take keyboard input(integer) and assign value to pointer
    printf("Please enter a number:\n");
    scanf("%d", &entered_int);
    printf("entered_int has a value of %d\n", entered_int);


    character_pointer =  (char*)malloc(entered_int * sizeof(char));

    if (character_pointer != NULL)
    {
        printf("Enter some text: \n");
        scanf(" ");
        gets(character_pointer);

        printf("Inputted text is %s\n", character_pointer);
    }

    free(character_pointer);
    
    return 0;
}