#include <stdio.h>

//binary search - This algorithm searches for a target value in a sorted array by repeatedly dividing the search interval in half.

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Return the index in array if found
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {1, 20, 33, 45, 59, 68, 88, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Please enter number you want to search: \n");
    scanf("%i", &target); 

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element found at array index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}