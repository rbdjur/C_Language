#include <stdio.h>

int main(int argc, char * argv[])
{
    // int num = 1;
    // char letter = 's';
    // long way = 15;
    // long long okay = 345666;
    // double dub = 12412342532;
    // long double in = 4956439785678934695;

    // int;
    // char;
    // long;
    // long long;
    // double;
    // long double;

printf("The byte sie of int is %zd\n", sizeof(int));
printf("The byte sie of short is %zd\n", sizeof(short));
printf("The byte sie of float is %zd\n", sizeof(float));
printf("The byte sie of char is %zd\n", sizeof(char));
printf("The byte sie of long is %zd\n", sizeof(long));
printf("The byte sie of long long is %zd\n", sizeof(long long));
printf("The byte sie of double is %zd\n", sizeof(double));
printf("The byte sie of long double is %u\n", sizeof(long double));



    return 0;
}