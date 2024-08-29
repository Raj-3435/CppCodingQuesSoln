// Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

// Sample Input:- Enter a number: 4
// Sample Output:- The factorial of 4 is: 24

#include <iostream>
using namespace std;
int main(){
    int n;
    int pdt = 1;
    cout << "Enter a number: ";cin>>n;
    for (int i=1;i<=n;i++){
        pdt = pdt * i;
    }
    cout << "The factorial of "<<n<<" is: "<<pdt;
    return 0;
}