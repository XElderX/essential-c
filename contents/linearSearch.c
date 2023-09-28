#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target if found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {1, 5, 9, 13, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Please enter number you want to search: \n");
    scanf("%i", &target); 
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
