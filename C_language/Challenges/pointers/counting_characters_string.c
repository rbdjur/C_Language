#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declare function named los, that returns data type of int and is passed a const character pointer
int los(const char * string);

//Driver code
int main(void)
{
    //print the integer value of strings passed to function los
    printf("%d\n", los("stringlength test"));
    printf("%d\n",los(""));
    printf("%d\n",los("me"));

    return 0;
}

//define the function los
int los(const char * string)
{
    //define a local pointer, lets call this last address because this local pointer will be incremented to get to the last character in the string so we can find the length of the string
    const char * lastaddress = string;

    // string is already set to the first character in the string sequence.

    //create a while loop with condition *lastaddress meaning as long as *lastaddress is true, 1 and not false,0. It will continute to execute code block.

    //since the string passed to los above in the driver code, the '\0' , null terminator, is added to the end of the string thats why the while loops ends because '\0' is Null, aka 0.
    while (*lastaddress)
    {
        ++lastaddress;
    };

    // Now that lastaddress is on the last character after being incremented, we want to subtract the last position by the first position and that will return the length.
    return lastaddress - string;
}


