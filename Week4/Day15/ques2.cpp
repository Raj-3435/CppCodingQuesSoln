// Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40

#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to add a new node at the end
    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete a value from the list
    void deleteValue(int val) {
        if (!head) return;

        // Handle deletion of the head node
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        while (current && current->data != val) {
            previous = current;
            current = current->next;
        }

        // Value not found
        if (!current) return;

        // Delete the node
        previous->next = current->next;
        delete current;
    }

    // Function to display the linked list
    void display() {
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

    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    LinkedList list;
    int value, num;

    std::cout << "Enter numbers for the linked list (end with -1):" << std::endl;
    while (true) {
        std::cin >> num;
        if (num == -1) break;
        list.append(num);
    }

    std::cout << "Enter the value to delete: ";
    std::cin >> value;

    list.deleteValue(value);

    std::cout << "Updated linked list: ";
    list.display();

    return 0;
}
