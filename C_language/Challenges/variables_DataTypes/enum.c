#include <stdio.h>

int main(int argc, char * argv[])
{
    // List enum called Company that holds google, facebook, xerox, Yahoo, Ebay, and microsoft in all caps.
    enum Company { GOOGLE = 0, FACEBOOK, XEROX, YAHOO, EBAY, MIRCOSOFT };

    //Create three variables that are assigned Xerox, Google, Ebay
    enum Company company1 = XEROX;
    enum Company company2 = GOOGLE;
    enum Company company3 = EBAY;

    printf("%d\n", company1);
    printf("%d\n", company2);
    printf("%d\n", company3);

    return 0;
}
// Success