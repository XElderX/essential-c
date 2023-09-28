#include <stdio.h>

int main() {
    int number = 42; // Declare an integer variable
    int *pointer;   // Declare a pointer to an integer
    pointer = &number; // Assign the address of 'number' to 'pointer'

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value of pointer: %p\n", pointer); // %p is used to print memory addresses
    printf("Value pointed to by pointer: %d\n", *pointer); // * is used to access the value pointed to by the pointer

    char str[] = "Hello, World!"; // Declare and initialize a character array (string)
    char *ptr = str;             // Declare a pointer to a character and assign it the address of str

    printf("String using array: %s\n", str);
    printf("String using pointer: %s\n", ptr);
    // Accessing characters using array notation
    printf("Character at index 0: %c\n", str[0]);
    // Accessing characters using pointer notation
    printf("Character at index 0 using pointer: %c\n", *ptr);
    // Iterate through the string using a pointer
    printf("Iterating through the string using a pointer:\n");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}