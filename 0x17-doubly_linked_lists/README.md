Doubly linked lists
--------------------
0x17.C
------

NEED TO KNOW!
-------------

* What is a doubly linked list?
* How to use doubly linked lists?
--------------------------------------------------

A doubly linked list is a data structure used in computer programming to store a collection of elements, called nodes, where each node contains a value and two pointers. The two pointers, often referred to as "prev" and "next" pointers, establish connections to the previous and next nodes in the list. This bidirectional linkage allows for efficient traversal in both directions.

------------------------------------------------------------------
Here's an example implementation of a doubly linked list in C.
------------------------------------------------------------------
------Code------

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to display the doubly linked list
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Initialize an empty doubly linked list
    struct Node* head = NULL;

    // Insert elements at the beginning of the list
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 1);

    // Display the list
    printf("Doubly Linked List: ");
    displayList(head);

    return 0;
}
---------------------------------------------------------------------------------

we define a struct Node to represent a node in the doubly linked list. The createNode function allocates memory for a new node and initializes its data and pointers. The insertAtBeginning function adds a new node at the beginning of the list, updating the pointers accordingly. The displayList function traverses and prints the elements of the list.

The main function demonstrates the usage of the doubly linked list by inserting elements at the beginning and displaying the final list.

------------------------------------------------------------------
Remember that this is a basic example
---------------------------------------------------------------------------------------
