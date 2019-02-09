#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float square_root(float a)
{
    float square;
    float pos_num;
    if (a < 0)
        {
            pos_num = fabsf(a);
            printf("But the absolute value is %.2f\n", pos_num);
            square = sqrt(pos_num);
        }
    else 
        {
            square = sqrt(a);
        }
    printf("The square root is %.2f\n", square);
    return square;
};

int main(int argc, char * argv[])
    {
        float c;
        float pos_num;
        printf("Please enter a number:\n");
        scanf("%f", &c);

        printf("The value you just entered is %.2f\n", c);

        square_root(c);

        // if (a < 0)
        // {
        //     pos_num = fabsf(a);
        //     printf("But the absolute value is %.2f\n", pos_num);
        //     printf("%.2f", pos_num);
        // } ;

        return 0;
    }