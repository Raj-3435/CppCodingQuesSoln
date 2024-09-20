// Write C++ program to demonstrate how to create dynamic variable using new keyword.

#include <iostream>

int main() {
    // Create a dynamic variable using new
    int* dynamicVar = new int;

    // Assign a value to the dynamic variable
    *dynamicVar = 42;

    // Display the value
    std::cout << "Value of dynamic variable: " << *dynamicVar << std::endl;

    // Don't forget to free the memory
    delete dynamicVar;

    return 0;
}
