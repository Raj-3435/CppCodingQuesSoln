// Ques 2: Write a program that defines a Rectangle class with a copy constructor

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Copy constructor
    Rectangle(const Rectangle& rect) {
        length = rect.length;
        width = rect.width;
    }

    // Method to calculate area
    double area() {
        return length * width;
    }

    // Method to display dimensions
    void display() {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect1(5.0, 3.0);

    // Use the copy constructor to create a new Rectangle object
    Rectangle rect2 = rect1;

    // Display dimensions and area of both rectangles
    std::cout << "Rectangle 1: ";
    rect1.display();
    std::cout << "Area: " << rect1.area() << std::endl;

    std::cout << "Rectangle 2 (Copy of Rectangle 1): ";
    rect2.display();
    std::cout << "Area: " << rect2.area() << std::endl;

    return 0;
}
