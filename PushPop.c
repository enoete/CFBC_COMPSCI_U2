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

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (stack->top == -1) {  // Check if the stack is empty
        printf("Stack Underflow\n");
        return -1;  // Return an error value (-1) to indicate the stack is empty
    }
    return stack->items[(stack->top)--];  // Return the top element and decrement the top
}

// Function to print the current state of the stack
void printStack(Stack* stack) {
    if (stack->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Current stack: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->items[i]);
        }
        printf("\n");
    }
}

// Main function to test push, pop, and print stack operations
int main() {
    Stack myStack;
    initStack(&myStack);  // Initialize the stack

    // Push elements onto the stack
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    // Pop one element from the stack
    printf("%d popped from stack\n", pop(&myStack));

    // Print the stack after popping
    printStack(&myStack);

    return 0;
}
