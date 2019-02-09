#include <stdio.h>

int main(void)//int argc, char * argv[])
{
    //1. Declare four variables all of type double
    double width = 22.3;
    double height = 44.3;
    double perimeter = 0;
    double area = 0;

    // double width = 0.0;
    // double height = 0.0;
    // double perimeter;
    // double area;

    //2. Ask the user to enter height and width of rectangle
    // printf("Please enter the height, followed by the width of your rectangle:\n");
    //3 . use scanf() to assign the input to the declared variables of height and width
    // scanf("%le %le", &height, &width);
    // scanf("%f", &height);
    // scanf("%f", &width);

    // printf("%f", height);

    //4. Use the user inputs input to calculate the perimeter and area of the rectangle

    perimeter = (2*height) + (2*width);
    area = (height * width);

    //5. printout the width, height, perimeter, and area
    printf("The width of the rectangle is %f\n", width);
    printf("The height of the rectangle is %f\n", height);
    printf("The perimeter of the rectangle is %f\n", perimeter);
    printf("The area of the rectangle is %f\n", area);

    return 0;
}

// Notes: Double check, but I believe everytime a Scan() is ran, the input is automatically converted to a string.  To do calculations one must convert the string input to given data type.