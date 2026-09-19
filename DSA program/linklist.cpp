// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// int main() {
//     // Create nodes
//     struct Node *head = malloc(sizeof(struct Node));
//     struct Node *second = malloc(sizeof(struct Node));
//     struct Node *third = malloc(sizeof(struct Node));

//     // Assign data
//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = NULL;

//     // Replace 2 with 5
//     second->data = 5;

//     // Print linked list
//     struct Node *temp = head;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void reverseDLL(Node*& head) {
    Node* current = head;
    Node* temp = NULL;

    while (current != NULL) {
        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to the next node (which is now prev)
        current = current->prev;
    }

    // Update head
    if (temp != NULL) {
        head = temp->prev;
    }
}

void printDLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(10);

    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    cout << "Original DLL: ";
    printDLL(head);

    reverseDLL(head);

    cout << "\nReversed DLL: ";
    printDLL(head);

    return 0;
}