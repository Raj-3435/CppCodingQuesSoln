// Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

// Sample Input:- Enter grade 1: 85
// Enter grade 2: 90
// Enter grade 3: 78
// Enter grade 4: 92
// Enter grade 5: 88

// Sample Output:- The average grade is: 86.6

#include <iostream>
using namespace std;
int main(){
    int g1,g2,g3,g4,g5;
    cout << "Enter grade 1: ";cin>>g1;
    cout << "Enter grade 2: ";cin>>g2;
    cout << "Enter grade 3: ";cin>>g3;
    cout << "Enter grade 4: ";cin>>g4;
    cout << "Enter grade 5: ";cin>>g5;    
    int avg = (g1+g2+g3+g4+g5)/5;
    cout << "The average grade is: "<<avg;
    return 0;

}