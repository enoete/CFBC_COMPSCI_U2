#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the queue

// Define the queue structure
typedef struct {
    int items[MAX];
    int front, rear;
} Queue;

// Function to initialize the queue
void initQueue(Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return (queue->front == -1);
}

// Function to check if the queue is full
int isFull(Queue* queue) {
    return ((queue->rear + 1) % MAX == queue->front);
}

// Function to enqueue (insert) an element into the queue
void enqueue(Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue Overflow\n");
        return;
    }

    // If queue is empty, set front to 0
    if (isEmpty(queue)) {
        queue->front = 0;
    }

    // Circular increment of rear
    queue->rear = (queue->rear + 1) % MAX;
    queue->items[queue->rear] = value;
    printf("%d enqueued to queue\n", value);
}

// Function to dequeue (remove) an element from the queue
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow\n");
        return -1;  // Return -1 to indicate the queue is empty
    }

    int value = queue->items[queue->front];  // Get the value from the front

    // Check if the queue is now empty after dequeueing
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;  // Reset the queue if it’s empty
    } else {
        queue->front = (queue->front + 1) % MAX;  // Circular increment of front
    }

    return value;
}

// Function to print the current state of the queue
void printQueue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Current queue: ");
    int i = queue->front;
    while (i != queue->rear) {
        printf("%d ", queue->items[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", queue->items[queue->rear]);
}

// Main function to test enqueue, dequeue, and print queue operations
int main() {
    Queue myQueue;
    initQueue(&myQueue);  // Initialize the queue

    // Enqueue elements into the queue
    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);

    // Dequeue one element from the queue
    printf("%d dequeued from queue\n", dequeue(&myQueue));

    // Print the queue after dequeueing
    printQueue(&myQueue);

    return 0;
}
