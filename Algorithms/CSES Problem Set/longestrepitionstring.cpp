// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

// Constraints
// 1≤n≤106
// Example

// Input:
// ATTCGGGA

// Output:
// 3



#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define LOOP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> m;
    string ar;
    long long int count=1;
    long long int lmax=0;
    for(int i=0;i<s.length();){
        int j=i;
        while(s[i]==s[j+1]){
            count=count+1;
            j++;
        }
        lmax=max(lmax,count);
        count=1;
        i==j?i=i+1:i=j+1;

    }
    cout<<lmax<<endl;

}