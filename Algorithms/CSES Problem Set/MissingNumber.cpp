// You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

// Input

// The first input line contains an integer n.

// The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

// Output

// Print the missing number.

// Constraints
// 2≤n≤2⋅105
// Example

// Input:
// 5
// 2 3 1 5

// Output:
// 4


#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <set>
using namespace std;

int main(){
    long long int n,temp;
    cin>>n;
    set<int> s;
    for(int i=0;i<n-1;i++){
            cin>>temp;
            s.insert(temp);
    }
    for(int i=1;i<=n;i++){
        if(s.find(i)==s.end()){
            cout<<i<<endl;
        }
    }

}