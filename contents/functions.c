#include <stdio.h>

float addition(float a, float b); // Function declaration (also known as function prototype) functions must be declared before calling

int main()
{
    float num1, num2, sum;

    printf("Please enter 1st number: \n");
    scanf("%f", &num1);

    printf("Now enter 2nd number: \n");
    scanf("%f", &num2);

    // Function call
    sum = add(num1, num2);

    printf("Sum: %f\n", sum);

    return 0;
}

// Function definition
float addition(float a, float b)
{
    return a + b;
}
