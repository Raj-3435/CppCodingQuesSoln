// Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int t;
    cin >> t;
    int flag = -1;
    for (int i=1;i<=n;i++){
        if (arr[i] == t){
            cout << i+1;
            flag = 0;
            break;
        }else{
            continue;
        }
    }
    if (flag==-1){
            cout << -1;
     }
}