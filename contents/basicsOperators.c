#include <stdio.h>

// In this example arithmetic operators in C with examples
int main()
{
    int integer1;
    int integer2;

    printf("Please enter 1st number: \n");
    scanf("%i", &integer1); // used for user input to store into veriable
    printf("Please enter 2nd number: \n");
    scanf("%i", &integer2); // used for user input to store into veriable

    int result = integer1 + integer2;
    printf(" 1st number and 2nd number addition is: %i \n", result);

    int result2 = integer1 - integer2;
    printf(" 1st number and 2nd number substraction is: %i \n", result2);

    float result3 = integer1 / integer2;
    printf(" 1st number and 2nd number division is: %f \n", result3);

    int result4 = integer1 % integer2;
    printf(" 1st number and 2nd number remainder is: %f \n", result4);

    // Comparison Operators

    if (integer1 == integer2)
    {
        printf(" 1st number and 2nd number is equally \n");
    }
    if (integer1 != integer2)
    {
        printf(" 1st number and 2nd number is NOT equally \n");
    }
    if (integer1 > integer2)
    {
        printf(" 1st number is greater than 2nd number \n");
    }
    if (integer1 < integer2)
    {
        printf(" 2nd number is greater than 1dt number \n");
    }
    
    return 0;
}