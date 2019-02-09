#include <stdio.h>

int main(int argc, char *argv[])
{

    int numberOfArguments = argc;
    char * argument1 = argv[0];
    char * argument2 = argv[1];
    char * argument3 = argv[2];
    char * argument4 = argv[3];

    printf("Number of arguments :%d\n", numberOfArguments);
    printf("Argument1 is the program name: %s\n", argument1);
    printf("Argument2 is the command line argument: %s\n", argument2);
    printf("Argument3 is the command line argument: %s\n", argument3);
    printf("Argument4 is the command line argument: %s\n", argument4);
    return 0;
}