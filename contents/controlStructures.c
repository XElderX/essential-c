#include <stdio.h>

// In this example dive into control structures in C with examples
int main()
{
    // conditional if-else

    int age;

    printf("Please enter your age: \n");
    scanf("%i", &age); // used for user input to store age into veriable

    if (age < 18)
    {
        printf("You are under-age of 18: \n");
    }
    else
    {
        printf("You are adult: \n");
    }

    // if else ladder

    int dob;
    printf("Please enter your birth years: \n");
    scanf("%i", &dob);

    if (dob <= 1923)
    {
        printf("No way you can be that old: \n");
    }
    else if (dob <= 1970)
    {
        printf("You are senior: \n");
    }
    else if (dob <= 1989)
    {
        printf("you propably wish to be back in 80s: \n");
    }
    else if (dob < 2000)
    {
        printf("you're 90s kid: \n");
    }
    else
    {
        printf("you're milleniuma lad \n");
    }

    // LOOPS
    int input;
    while (input != 49)
    {
        printf("7 * 7 = ? \n");
        scanf("%i", &input);
    }

    int rows;
    printf("Please enter your rows: \n");
    scanf("%i", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        printf("+");

        if (i == rows)
        {
            break;
        }
    }
    printf("\n");

    int asciiCode = 160;
    printf("you get as many ascii symbols as you have rows! \n");
    do
    {
        rows--;
        if (asciiCode >= 255)
        {
            continue;
        }
        printf("%c | ", asciiCode);
        asciiCode += 1;
    } while (rows >= 0);

    return 0;
}
