// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int v;
    cin >> v;
    int* ptr;
    ptr = &v;
    cout << v << endl;
    cout << *ptr;
    return 0;
}