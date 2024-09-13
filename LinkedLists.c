#include <stdio.h>
#include <stdlib.h>

// Definition of a Node in the Linked List
struct Node {
    int data;
    struct Node* next;  // Pointer to the next node
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;  // The next pointer is set to NULL by default
    return newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;  // If list is empty, make the new node the head
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;  // Traverse to the last node
    }
    temp->next = newNode;  // Link the last node to the new node
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);  // Print the data in each node
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete a node from the front
void deleteFromFront(struct Node** head) {
    if (*head == NULL) {
        printf("List is already empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;  // Move the head to the next node
    free(temp);  // Free the memory of the deleted node
}

int main() {
    struct Node* head = NULL;  // Initialize the list as empty

    // Insert nodes into the list
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    printf("Linked List after insertion: \n");
    displayList(head);

    // Delete the first node
    deleteFromFront(&head);

    printf("Linked List after deletion: \n");
    displayList(head);

    return 0;
}
