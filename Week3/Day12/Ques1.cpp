// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40

#include <iostream>

using namespace std;

struct Node {
    int data;     // Data stored in the node
    Node* next;   // Pointer to the next node in the list

    Node(int value) : data(value), next(nullptr) {}
};

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
    int n;  // Number of elements in the linked list
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number of elements must be greater than 0." << endl;
        return 1;
    }

    Node* head = nullptr;  // Pointer to the head of the list
    Node* tail = nullptr;  // Pointer to the tail of the list

    // Input values for the linked list
    cout << "Enter the values for the linked list: ";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        Node* newNode = new Node(value);

        // If the list is empty, initialize the head and tail
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            // Append the new node to the end of the list
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print the linked list
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
