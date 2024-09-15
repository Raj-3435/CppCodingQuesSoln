
// Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

// Example:

// Input: "A man, a plan, a canal, Panama"
// Output: true

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str){
    // string cleaned;
    string cleaned;
    for (char c:str){
        if (isalnum(c)){
            cleaned += tolower(c);
        }
    }

    return equal(cleaned.begin(), cleaned.end(), cleaned.rbegin());
}


int main(){
    string s;
    getline (cin,s);
    if (isPalindrome(s)){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;

}