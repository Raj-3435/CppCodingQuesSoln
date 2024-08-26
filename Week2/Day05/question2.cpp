// Ques-02 Write a C++ function that takes a string as input and reverses it.

// Sample Input:
// Enter a string: CipherSchools

// Sample Output:
// Reversed string: sloohcSrehpiC

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string i;
    cout<<"Enter a string: ";
    cin >> i;
    cout<<"Reversed string: ";
    reverse(i.begin(),i.end());
    cout << i;
    return 0;

}