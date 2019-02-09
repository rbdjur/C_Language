#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    // 1. declare a string by using an array as the data type to hold each letter of the string in each of the indexes of the array.
    char myString[20];

    // 2. Another way to declare a string is to leave the square brackets empty
    char anotherString[] = {'H', 'e', 'l', 'l', 'o'};

    //3. 
    char str[40] = "To be";

    //4. Display a string

    printf("the str[40] displays: %s\n", str);


    return 0;
}

//Notes: 

// 1. In "char myString[20]", an array is used to hold a string with each letter being stored in each index of the string.  However, the 20 in between the square brackets notifies the user of how big the array is to hold the string.  Furthermore, at the end of a string "\0" is always added.  "\0" is a termination character that tells the compiler the string has ended.  So essentially, "myString[20]" is only big for 19 elements in the array.

//2. It is best practice when defining a string to leave the square brackets empty so the compiler can calculate how big the array needs to be. This will prevent bugs.  
// the string is stored in array anotherString as follows:
    // anotherString[0] = 'H';
    // anotherString[1] = 'e';
    // anotherString[2] = 'l';
    // anotherString[3] = 'l';
    // anotherString[4] = 'o';
    // anotherString[5] = '\0';

//3. In this example, elements from str[0] to str[4] will be characters and str[5] will contain "\0".  However, in memory space is allocated for 40 elements of the array despite not using all of the 40 elements.