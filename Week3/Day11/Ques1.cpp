// Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: YES

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int t;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int flag = -1;
    cin >> t;
    for (int i=0;i<n;i++){
        if (arr[i]==t){
            flag = 0;
            break;
        }else
            continue;
    }
    if (flag==0)
        cout<< "YES";
    else
        cout << "NO";
    return 0;
}