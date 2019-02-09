#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0;
    int i;

    for (i = 0; i < count; ++i)
    {
        printf("%2u>", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

        average = (float)sum / count;

        printf("%ld\n", sum);
        printf("%.2f\n", average);




    return 0;
}