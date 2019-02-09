#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define a struct called employee that will hold all the members necessary (name array (char), hire date (int), salary(float))
    struct employee 
    {
        char name[30];
        char hireDate[15];
        float salary;
    };

int main(void)
{

    // create and initalize an instance of employee type, we will call this number 1
    struct employee number_one = {"Abraham", "01/15/2019", 1234.56};

    // Part 4, Method 1.
    // Declare another employee, number 2.
    // struct employee number_two = { "",2018, 9999.9};

    printf("The name for employee number_one is %s \n hire date for employee number_one is %s \n and the salary of employee number_one is %f\n", number_one.name, number_one.hireDate, number_one.salary);

    //Part 4, Method 2.
    // struct employee number_two;

    //Ask the user to enter a name
    printf("Please enter a name\n");
    // Use scanf() and then assign the value the user input to the address of the input_name
    //input name is not a member of the struct employee
    scanf("%s", number_one.name);

    printf("Please enter year of date for hire\n");
    scanf("%s", number_one.hireDate);

    printf("Please enter a number with two decimal places for the salary\n");
    scanf("%f", &number_one.salary);


    printf("The name is %s \n the hire date is %s  \n and the salary of employee number_two is %f\n", number_one.name, number_one.hireDate, number_one.salary);


    return 0;
}