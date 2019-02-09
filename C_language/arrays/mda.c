#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    // declared variables for interations through matrix
    int i;
    int j;
    // 1 dimesional array
    int arr[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    // multi dimensional array
    int mult_arr[2][3] = {

        {1,2,3},
        {4,5,6}
    };

    //loop through single dimesion array
    for (i = 0; i < 10; i++)
    {
        printf("Loop through arr[%d] array values are %d\n", i, arr[i]);
    };

    // loop through muilt dimension arrau
     for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            {
                printf("the mult_arr[%d][%d] is %d\n",i + 1,j + 1,mult_arr[i][j]);
            }
    };

    return 0;
}

// Success