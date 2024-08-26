// Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of the array: 75

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of array: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    cout << "Enter the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Sum of the array: ";
    cout << sum;
    return 0;
}