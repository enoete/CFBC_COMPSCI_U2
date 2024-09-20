#include <stdio.h>

// Function to perform binary search
int binarySearch(int array[], int left, int right, int target) {
    while (left <= right) {  // Continue searching while left index is less than or equal to right index
        int mid = left + (right - left) / 2;  // Calculate the middle index

        // Check if the target is at mid
        if (array[mid] == target) {
            return mid;  // Return the index if target is found
        }

        // If target is greater than the middle element, ignore the left half
        if (array[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller than the middle element, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1;  // Return -1 if the target is not found
}

int main() {
    // Sorted array for binary search
    int array[] = {2, 3, 4, 10, 40,12,12,12,41,55,2,33,1111,22311,5};
    int size = sizeof(array) / sizeof(array[0]);  // Calculate the number of elements in the array
    int target;

    // Ask user for the number to search
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    // Call binarySearch and initialize left (0) and right (size - 1)
    int result = binarySearch(array, 0, size - 1, target);

    // Check if the number is found or not
    if (result != -1) {
        printf("Number %d found at index %d\n", target, result);
    } else {
        printf("Number %d not found in the array\n", target);
    }

    return 0;
}
