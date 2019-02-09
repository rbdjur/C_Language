#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Create a structure called item, that holds members: *itemName (pointer), quantity (int), price (float), amount - quantity * price (float)
struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;  //= quantity * price;
};


// declare a prototype of two functions we will need to use in the program
// One function will take a pointer to a structure
void readItem(struct item * i);
// One function will take a pointer to a structure
void printItem(struct item *i);

int main(void)
{
    // declare structure thing
    struct item thing;

    // Declare a pointer of data type, struct item, that will hold the addres of thing
    struct item * ptr_to_thing;

    // Set the address of thing to ptr_to_item. By setting the address of thing to ptr_to_thing, this gives us the flexibility to manipulate the data types in the struct item thing
    ptr_to_thing = &thing;

    //Allocate memory to the pointer, ptr_to_item, to the size of 30 * the sizeof(char)
    ptr_to_thing->itemName = (char*)malloc(30 * sizeof(char));

    //Check to see if memory is allocated, if ptr_to_thing is equal to NULL (0) then exit the function due to general problems.
    if(ptr_to_thing == NULL)
    {
        exit(-1);
    }

    //Call the readItem function and pass it the ptr_to_thing pointer that holds the address of the structure item thing.  This will now execute the print and scanf functions we declared and defined outside of the driver code (main function()).
    readItem(ptr_to_thing);
    //Call the printItem function and pass the same pointer, ptr_to_thing, to print the changes made to the data.
    printItem(ptr_to_thing);


    return 0;
}


// Create a function named readItem that takes a structure pointer type as a parameter.
void readItem (struct item * i)
{
    //Prompt user for values
    printf("Please enter a product name: \n");
    scanf("%s", i->itemName);

    // Prompt for price and capture user input
    printf("Please enter a price for the product: \n");
    scanf("%f", &i->price); 

    // Prompt for quantity and capture user input
    printf("Please enter a quantity for the product: \n");
    scanf("%d", &i->quantity);

    // configure the amount by multiplying the price times the quantity.  Alert that in order to perform an arithmetic operation on both members, change the data type of price to float.
    i->amount = (float)i->price * i->quantity;  
};


// Create a function named print item that takes as a parameter a structure point of type item
void printItem(struct item * i)
{
    printf("The name of the item is %s\n", i->itemName);
    printf("The price of the product is %f\n", i->price);
    printf("The value of the quantity is %d\n", i->quantity);
    printf("The total amount is %.2f\n", i->amount);
};