// Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

// Sample Input:- str1 = "Hello, World!"
// Output:- 13

#include <bits/stdc++.h>
using namespace std;

int stringLength(string &str){
    int a = str.size();
    return a;
}

int main(){
    string s;
    getline (cin,s);
    cout << stringLength(s);
    return 0;
}