#include <stdio.h>

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;  // Assume the first unsorted element is the smallest

        // Find the smallest element in the unsorted portion of the array
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;  // Update the index of the smallest element
            }
        }

        // Swap the found smallest element with the first unsorted element
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

void printArray(int array[], int
