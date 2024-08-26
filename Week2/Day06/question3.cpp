// Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

// Sample Input:
// Enter the size of the array: 5
// Enter the array elements: 5 10 15 20 25

// Sample Output:
// Number of odd numbers: 3
// Number of even numbers: 2

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: "; 
    cin >> n;
    int arr[n];
    cout<< "Enter the array: ";
    int sum_of_odd = 0;
    int sum_of_even = 0;
    for(int i=0;i<n;i++){
        cin>> arr[i];
        if (arr[i]%2==0){
            sum_of_even += 1;
        }else{
            sum_of_odd += 1;
        }
    }
    cout << "sum of odd number: "<< sum_of_odd<<endl;
    cout << "sum of even number: "<< sum_of_even;
    return 0;
}