// Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

// Sample Input : - str1 = "Hello, "
// str2 = "World!"

// Sample Output :- "Hello, World!"

#include <bits/stdc++.h>
using namespace std;

void concatenateStrings(string &str1,string &str2){
    cout << str1 + " "+ str2;
}

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    concatenateStrings(str1,str2);
}