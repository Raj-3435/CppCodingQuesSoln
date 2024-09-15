// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

// Sample Input:- String ="Hello, World!"
// character=’l’

#include <bits/stdc++.h>
using namespace std;

int countCharacter(string &str,char ch){
    int count =0;
    for (int i=0;i<str.size();i++){
        if (ch == str[i]){
            count += 1;
        }
        else {
            continue;
        }
    }
    return count ;
}

int main(){
    string s;
    char c;
    getline(cin,s);
    cin >> c;
    cout << countCharacter(s,c);
}