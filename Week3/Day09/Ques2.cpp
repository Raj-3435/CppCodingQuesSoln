// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int* ptr;
    ptr = arr;
    for (int i=0;i<n;i++){
        cout << *(ptr+i) <<" " ;
    }
    return 0;
}
    