#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {  // Loop through the entire array
        for (int j = 0; j < size - i - 1; j++) {  // Inner loop for comparing adjacent elements
            if (array[j] > array[j + 1]) {  // Swap if the current element is greater than the next
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    printArray(array, size);

    bubbleSort(array, size);

    printf("Sorted array: ");
    printArray(array, size);

    return 0;
}
