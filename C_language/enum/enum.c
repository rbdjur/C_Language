#include <stdio.h>

int main(void)
{
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    _Bool isMale = (myGender == anotherGender);
    //Should return False (0) because myGender is male and anotherGender is female

    printf("%d\n", isMale);

    return 0;
}