// Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

// Example:

// Input: {1, 5, 3, 9, 2}
// Output: 9

#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int size){
    int max = arr[0]; 
    for (int i=0;i<size;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    findMax(arr,n);
}