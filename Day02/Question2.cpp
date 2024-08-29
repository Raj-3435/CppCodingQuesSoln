// Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
// Grade Criteria:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59

// Sample Input:- Enter the score: 85
// Sample Output:- Grade: B"

#include <iostream>
using namespace std;
int main(){
    int m;
    cout << "Enter the score: ";
    cin >> m;
    cout << "Grade: ";
    if (m>=0 && m<=59)
        cout << "F";
    else if(m>=60 && m<=69)
        cout << "D";
    else if(m>=70 && m<=79)
        cout << "C";
    else if (m>=80 && m<=89)
        cout << "B";
    else if (m>=90 && m<=100)
        cout << "A";
    return 0;
}