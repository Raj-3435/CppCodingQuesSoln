// Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* ptr;
    ptr = &n;
    int* ptr2;
    ptr2 = ptr;
    cout << n << endl;
    cout << *ptr << endl;
    cout << *ptr2 ;
    return 0;
}