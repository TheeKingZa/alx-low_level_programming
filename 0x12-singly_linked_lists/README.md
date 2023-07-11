0x12. C - Singly linked lists
--------------------
CONTENT
--------------------

Linked lists and arrays are both data structures used to store and organize data, but they have different characteristics and are suitable for different situations. Here's a comparison of linked lists and arrays and their common use cases:

Linked Lists:

Linked lists are dynamic data structures, meaning their size can be modified during runtime.
Each element in a linked list, called a node, contains a value and a reference (or link) to the next node in the list.
Linked lists do not require contiguous memory allocation. Each node can be placed anywhere in memory, and they are connected through the references.
Insertion and deletion operations are efficient in linked lists, as they only require updating the references between nodes. However, accessing elements by index is inefficient because you need to traverse the list from the beginning.
Arrays:

Arrays are static data structures with a fixed size determined at the time of creation.
Elements in an array are stored in contiguous memory locations, allowing for efficient access by index.
Array operations like insertion and deletion are relatively inefficient, especially if done in the middle of the array, as all subsequent elements need to be shifted.
Arrays are suitable for situations where the size of the data is known in advance, and random access to elements is frequently required.
To build and use a linked list, you can follow these steps:

Define a node structure: Create a structure or a class to represent each node in the linked list. This structure should have a value field and a reference field to the next node.

Create the head pointer: Declare a variable that will serve as the starting point of your linked list. Initially, it will be set to null to indicate an empty list.

Insertion:

To insert a new node at the beginning of the linked list, create a new node, set its value, and update its reference to the current head node. Then, update the head pointer to point to the new node.
To insert a new node at the end of the linked list, traverse the list from the head until you reach the last node. Create a new node, set its value, and update the reference of the last node to point to the new node.
Deletion:

To delete a node from the linked list, find the node you want to delete and update the reference of the previous node to skip the node you want to remove. Remember to properly handle cases where the node to delete is the head or the tail of the list.
Traversal:

To traverse the linked list, start from the head node and follow the references to the next nodes until you reach the end of the list. You can perform operations on each node as you traverse.
Here's an example implementation of a singly linked list:

/* Structure for a node */
typedef struct Node {
    int value;
    struct Node* next;
} Node;

/* Function to insert a new node at the beginning of the linked list */
void insertAtBeginning(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        /* Handle memory allocation error */
        return;
    }

    newNode->value = value;
    newNode->next = *head;
    *head = newNode;
}

/* Function to insert a new node at the end of the linked list */
void insertAtEnd(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        /* Handle memory allocation error */
        return;
    }

    newNode->value = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

/* Function to delete a node with a given value from the linked list */
void deleteNode(Node** head, int value) {
    if (*head == NULL) {
        return;
    }

    Node* temp = *head;
    if (temp->value == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    Node* prev = NULL;
    while (temp != NULL && temp->value != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return; /* Node with the given value not found */
    }

    prev->next = temp->next;
    free(temp);
}

/* Function to traverse and print the linked list */
void traverseLinkedList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

/* Example usage */
int main() {
    Node* head = NULL;

    /* Insert nodes at the beginning */
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    /* Insert nodes at the end */
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);

    /* Delete a node */
    deleteNode(&head, 3);

    /* Traverse and print the linked list */
    traverseLinkedList(head);

    /* Clean up memory */
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
