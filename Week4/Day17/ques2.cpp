// Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.

#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

int main() {
    int rows, cols;
    int arr[MAX_ROWS][MAX_COLS];
    int sum = 0;

    // Input dimensions of the array
    std::cout << "Enter number of rows and columns (max 10 each): ";
    std::cin >> rows >> cols;

    // Input the elements of the 2D array
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
            sum += arr[i][j]; // Add the current element to sum
        }
    }

    // Output the sum of all values
    std::cout << "Sum of all values in the array: " << sum << std::endl;

    return 0;
}
