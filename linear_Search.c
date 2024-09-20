#include <stdio.h>


//this is a function that takes in 3 inputs.  Target is the number that the user will input to be searched for.
int linearSearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;  // Return the index if the target is found
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int array[] = {5, 3, 8, 6, 7, 2};  // Example array
    int size = sizeof(array) / sizeof(array[0]);  // NOTE THAT THE sizeof() function returns the actual size of the array in BYTES.  To get the actual size of the array based on the number of elements, we will have to divide that by the size of each element.
    int target;

    // Ask user for the number to search
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    // Perform linear search
    int result = linearSearch(array, size, target);

    // Check if the number is found or not
    if (result != -1) {
        printf("Number %d found at index %d\n", target, result);
    } else {
        printf("Number %d not found in the array\n", target);
    }

    return 0;
}
