// Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
// Assuming that string contains only lowercase.

// Sample Input:
// Enter a string: cipherschools

// Sample Output:
// Number of vowels: 4
// Number of consonants: 9

#include <iostream>
using namespace std;
int main(){
    string str;
    cout<< " Enter a string: ";
    cin >> str;
    int strcount = str.size();
    int vowel  = 0; 
    for (int i=0;i<=strcount;i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowel = vowel + 1;
        }
    }
    cout << "Number of vowels: "<< vowel<<endl;
    cout << "Number of consonants "<< strcount-vowel << endl;
    return 0;
}