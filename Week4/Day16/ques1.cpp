// Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class SortedLinkedList {
private:
    Node* head;

public:
    SortedLinkedList() : head(nullptr) {}

    // Function to insert a value in sorted order
    void insertSorted(int val) {
        Node* newNode = new Node(val);
        // If the list is empty or new node should be the new head
        if (!head || head->data >= val) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        // Traverse to find the correct position to insert
        while (current->next && current->next->data < val) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    // Function to display the linked list
    void display() const {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data;
            if (temp->next) {
                std::cout << "->";
            }
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    ~SortedLinkedList() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    SortedLinkedList list;
    int num, value;

    std::cout << "Enter sorted numbers for the linked list (end with -1):" << std::endl;
    while (true) {
        std::cin >> num;
        if (num == -1) break;
        list.insertSorted(num); // Maintain sorted order while inserting
    }

    std::cout << "Enter the value to insert: ";
    std::cin >> value;

    list.insertSorted(value); // Insert new value while maintaining order

    std::cout << "Updated linked list: ";
    list.display();

    return 0;
}

