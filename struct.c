#include <stdio.h>

// Define a structs
struct Address
{
    char street[50];
    char city[50];
};
struct Person
{
    char name[50];
    int age;
    struct Address address;
};

int main()
{
    // Declare a variable of type "struct Person"
    struct Person person1;

    // Assign values to the struct members

    //strcpy (String Copy) because C does not allow direct assignment of strings using the = operator, and you need to copy the characters individually.
    strcpy(person1.name, "John");
    person1.age = 25;
    strcpy(person1.address.street, "123 Main St");
    strcpy(person1.address.city, "London");

    // Access and print the struct members, including the nested struct
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Street: %s\n", person1.address.street);
    printf("City: %s\n", person1.address.city);

    return 0;
}