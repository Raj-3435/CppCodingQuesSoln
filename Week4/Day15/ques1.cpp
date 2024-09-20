// Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    int rollNumber;

public:
    // Constructor to initialize the student details
    Student(std::string name, int age, int rollNumber) {
        this->name = name; // Using this pointer to refer to the current object's member
        this->age = age;
        this->rollNumber = rollNumber;
    }

    // Method to display student details
    void displayDetails() {
        std::cout << "Student Details:" << std::endl;
        std::cout << "Name: " << this->name << std::endl; // Using this pointer
        std::cout << "Age: " << this->age << std::endl;   // Using this pointer
        std::cout << "Roll Number: " << this->rollNumber << std::endl; // Using this pointer
    }
};

int main() {
    // Create a Student object
    Student student1("Alice", 20, 101);

    // Display the student's details
    student1.displayDetails();

    return 0;
}
