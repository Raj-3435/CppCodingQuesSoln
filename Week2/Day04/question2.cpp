// Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

// Sample Output:-

// Complex Number 1: 3 + 4i
// Complex Number 2: 1 + 2i
// Sum: 4 + 6i
// Difference: 2 + 2i

#include <iostream>

class Complex {
public:
    float real, imag;

    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Function to input the complex number
    void input() {
        std::cout << "Enter real part: ";
        std::cin >> real;
        std::cout << "Enter imaginary part: ";
        std::cin >> imag;
    }

    // Overload the + operator
    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the - operator
    Complex operator-(const Complex &other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Function to display the complex number
    void display() const {
        std::cout << real;
        if (imag >= 0)
            std::cout << " + " << imag << "i" << std::endl;
        else
            std::cout << " - " << -imag << "i" << std::endl;
    }
};

int main() {
    Complex c1, c2;

    std::cout << "Enter Complex Number 1:\n";
    c1.input();

    std::cout << "Enter Complex Number 2:\n";
    c2.input();

    Complex sum = c1 + c2;        // Sum: c1 + c2
    Complex diff = c1 - c2;       // Difference: c1 - c2

    std::cout << "\nComplex Number 1: ";
    c1.display();
    std::cout << "Complex Number 2: ";
    c2.display();

    std::cout << "\nSum: ";
    sum.display();

    std::cout << "Difference: ";
    diff.display();

    return 0;
}
