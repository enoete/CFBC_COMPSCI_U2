#include <stdio.h>

// Function to perform selection sort
void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;  // Assume the current element is the minimum

        // Find the minimum element in the remaining unsorted array
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;  // Update the index of the minimum element
            }
        }

        // Swap the found minimum element with the first unsorted element
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

int main() {
    int array[] = {64, 25, 12, 22, 11};  // Example array
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Perform selection sort
    selectionSort(array, size);

    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
