#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the stack

// Define the stack structure
typedef struct {
    int items[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack* stack) {
    stack->top = -1;  // Set top to -1 to indicate the stack is empty
}

// Function to push an element onto the stack
void push(Stack* stack, int value) {
    if (stack->top == MAX - 1) {  // Check if the stack is full
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++(stack->top)] = value;  // Increment top and add the new value
    printf("%d pushed to stack\n", value);
}

// Main function to test the push operation
int main() {
    Stack myStack;
    initStack(&myStack);  // Initialize the stack

    // Push elements onto the stack
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);


    return 0;
}
