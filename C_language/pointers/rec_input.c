#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int value = 0;
    int *pvalue = &value;

    printf("Input an integer:");
    scanf("%d", pvalue);

    printf("You entered %d. \n", value);

    if(!pvalue)
    {
        printf("Hello This is the false route\n");
    }
    else {
        printf("This is true\n");
    }
    return 0;


}

//Notes:
// notice how in scanf, we do not use an & because pvalue is a pointer already pointing to the &value in line 9.