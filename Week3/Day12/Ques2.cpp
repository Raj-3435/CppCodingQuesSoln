#include <iostream>

using namespace std;

struct Node {
    int data;     // Data stored in the node
    Node* next;   // Pointer to the next node in the list

    Node(int value) : data(value), next(nullptr) {}
};

// Function to insert a new node with the given data at the end of the list
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);  // Create a new node with the given data

    // If the list is empty, initialize the head with the new node
    if (head == nullptr) {
        head = newNode;
    } else {
        // Traverse to the end of the list
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        // Append the new node at the end
        current->next = newNode;
    }
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;  // Start with the head of the list

    // Traverse the list
    while (current != nullptr) {
        cout << current->data << " ";  // Print the data of the current node
        current = current->next;       // Move to the next node
    }
    cout << endl;  // Print a newline at the end
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Print the original linked list
    cout << "Original linked list: ";
    printLinkedList(head);

    // Insert a new node with data 40 at the end
    insertAtEnd(head, 40);

    // Print the updated linked list
    cout << "Updated linked list: ";
    printLinkedList(head);

    // Clean up memory
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
