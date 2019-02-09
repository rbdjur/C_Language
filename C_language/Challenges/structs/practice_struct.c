#include <stdlib.h>
#include <stdio.h>

// define a structure, called data, that takes in a string for name, location, age, DOB, height(inches), weight(lbs), eye-color.
struct data {
    char * ptrFName;
    char * ptrCityLocation;
    int age;
    char * ptrDOB;
    int height;
    int weight;
    char * ptrEyeColor;
};

// declare a function prototype, called profile, that takes in a pointer to a structure called data.
void profile(struct data * i);

//declare a function prototype, called printResults, that takes in a pointer to a structure called data and prints the data inside.
void printResults(struct data *i);


int main(void)
{
    // create an instance of the struct data, called info
    struct data info;

    // create a pointer that will reference the struct data info by holding its address.
    struct data * ptrInfo;
    
    // Set the address of info to ptrInfo
    ptrInfo = &info;

    // For all the char pointers in the struct data info, we need to allocate memory to each one.  Don't forget to free them at the end as well.
    ptrInfo->ptrFName = (char*)malloc(15 * sizeof(char));

    ptrInfo->ptrCityLocation = (char*)malloc(18 * sizeof(char));

    ptrInfo->ptrDOB = (char*)malloc(10 * sizeof(char));

    ptrInfo->ptrEyeColor = (char*)malloc(8 * sizeof(char));

    //Check to see if these members are equal to null. IF they are NULL notify the user that the memory was not allocated and exit the program.
    if( (ptrInfo->ptrFName) && (ptrInfo->ptrCityLocation) && (ptrInfo->ptrDOB) && (ptrInfo->ptrEyeColor) == NULL)
    {
        printf("There was no memory allocated to the pointer members of the structure");
        exit(-1);
    }

    //Call the functions to take user input
    profile(ptrInfo);
    //Call the function to print the results
    printResults(ptrInfo);
    //Free the memory of the members from struct data info that were assigned to ptrInfo.
    free(ptrInfo->ptrFName);
    free(ptrInfo->ptrCityLocation);
    free(ptrInfo->ptrDOB);
    free(ptrInfo->ptrEyeColor);
    return 0;
}

void profile(struct data * i)
{
    //Note: scan() takes two arguments, a format specifier and a pointer.
    //This is why there are some instances of the usage of a & operator, signifying that second argument is not a pointer.
    printf("Please enter your Firstname: \n");
    scanf("%s", i->ptrFName);
    printf("Please enter your City: \n");
    scanf("%s", i->ptrCityLocation);
    printf("Please enter your age: \n");
    scanf("%i", &i->age);
    printf("Please enter your Date of Birth (DD/MM/YYYY): \n");
    scanf("%s", i->ptrDOB);
    printf("Please enter your heigh(inches): \n");
    scanf("%d", &i->height);
    printf("Please enter your weight(lbs): \n");
    scanf("%d", &i->weight);
    printf("Please enter your eye color: \n");
    scanf("%s", i->ptrEyeColor);
};

void printResults(struct data * i)
{
    // Even though some of the members are pointers, each member is accessed using pointer access notation (->).
    printf("Your first name is: %s\n", i->ptrFName);
    printf("Your City is: %s\n", i->ptrCityLocation);
    printf("Your age is: %d\n", i->age);
    printf("Your Date of Birth is: %s\n", i->ptrDOB);
    printf("Your height is: %d\n", i->height);
    printf("Your weight is: %d\n", i->weight);
    printf("Your eye color is: %s\n", i->ptrEyeColor);
}

//Notes: After declaring and initalization an instance of the struct data (in this case, struct data info), allocate memory for the pointer variables from the struct data info inside the driver code.  