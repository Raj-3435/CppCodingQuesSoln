// Ques 1: Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.

#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

bool findKeyInArray(int arr[MAX_ROWS][MAX_COLS], int rows, int cols, int key) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == key) {
                return true; // Key found
            }
        }
    }
    return false; // Key not found
}

int main() {
    int rows, cols;
    int arr[MAX_ROWS][MAX_COLS];

    // Input dimensions of the array
    std::cout << "Enter number of rows and columns (max 10 each): ";
    std::cin >> rows >> cols;

    // Input the elements of the 2D array
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }

    // Input the key to search for
    int key;
    std::cout << "Enter the key to search for: ";
    std::cin >> key;

    // Check if the key exists in the array
    if (findKeyInArray(arr, rows, cols, key)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
