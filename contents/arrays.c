#include <stdio.h>

int array[3]; // Array has to be declare with elements count before assigned, in this case means 3 integer elements memory will be reserved in memory . 3 x 4 bytes so total 12bytes in memory allocated

int main()
{
    // Initialize array
    array[0] = 9;
    array[1] = 1;
    array[2] = 1;

    // Accessing Elements in array
    int value = array[1];                        // access to 2nd element of array
    int size = sizeof(array) / sizeof(array[0]); // Gives the elements count in the array.

    printf("3rd value in array is: %i \n", value);
    printf("That array size is: %i \n", size);

    int array2[5] = {1, 2, 3, 4, 5}; // Initializes an integer array with values.

    // looping through array
    for (int i = 0; i < size; i++)
    {
        printf("%i element in array is:  %d \n", i, array[i]);
    }

    int multiArray[3][3] = {{1, 1, 1}, {9, 9, 2}, {5, 4, 3}};
    int element = multiArray[1][2]; // Accesses the element in the second row and third column.
    printf(" multi dimesian array second row and second column is:  %i \n", element);

    return 0;
}