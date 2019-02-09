#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

int main()
{
    int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i;
    int numbers[5] = { 5, 10, 15, 20, 25};
    // printf("hello");

    for (i = 0; i < MONTHS; i++)
    {
        printf("Month %d has %d has of days\n", i +1, days[i]);
    };


    // for (i = 0; i < 5; i++)
    // {
    //     printf("the array holds values of %d\n", numbers[i]);
    // }

    return 0;
}