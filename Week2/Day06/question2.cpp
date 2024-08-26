// Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of odd numbers: 45
// Sum of even numbers: 30

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
            sum_of_even += arr[i];
        }else{
            sum_of_odd += arr[i];
        }
    }
    cout << "sum of odd number: "<< sum_of_odd<<endl;
    cout << "sum of even number: "<< sum_of_even;
    return 0;
}