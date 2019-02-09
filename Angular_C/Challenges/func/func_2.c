#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[])
    {
        float a;
        float pos_num;
        printf("Please enter a number:\n");
        scanf("%f", &a);

        printf("The value you just entered is %.2f\n", a);

        

        if (a < 0)
        {
            // printf("Inisde the if condition\n");
            pos_num = fabsf(a);
            return pos_num;
            printf("But the absolute value is %.2f\n", pos_num);
            // printf("%.2f", a);
        }

        return 0;
    }