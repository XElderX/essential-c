#include <stdio.h>
#include <string.h> // Include the string manipulation functions

int main()
{

    int num1, num2;                     // Declare integer variables
    float floatValue = 3.14159;         // Declare and initialize a float variable
    double doubleValue = 3.14159265359; // Declaration and initialization of a double

    char character = 'A';                                    // Declare and initialize a character variable
    char string[] = "String declare this way as char array"; // Declare and initialize a character variable

    num1 = 10; // Assign values to the integer variables
    num2 = 20;

    // Display the values of the variables
    printf("Pi in double: %f\n", doubleValue);
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("Pi in float: %f\n", floatValue);
    printf("doubleValue = %d\n", doubleValue);
    printf("firstInitial = %c\n", character);
    printf("string variable display:  = %s\n", string);

    // Arrays

    // Arrays declareation and initialize

    int numbers[3]; // Declaration of an integer array with 5 elements

    numbers[0] = 10;
    numbers[1] = 50;
    numbers[2] = 80;

    // Access and print array elements
    printf("Element 1: %d\n", numbers[0]);
    printf("Element 3: %d\n", numbers[2]);

// booleans declareation and initialize

// 1st way
#define TRUE 1
#define FALSE 0

    int isTrue = TRUE;
    int isFalse = FALSE;

    if (isTrue)
    {
        printf("It's true!\n");
    }
    else
    {
        printf("It's false!\n");
    }

    // another way
#include <stdbool.h> // Include the stdbool.h header

    bool isTrue = true;
    bool isFalse = false;

    if (isTrue)
    {
        printf("It's true!\n");
    }
    else
    {
        printf("It's false!\n");
    }

    return 0;
}
