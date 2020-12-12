/*
N Length Combinations
Given a string S, print all different N length combinations of the characters in string S.
There may be different permutations with the same letter combinations; consider only the one that has its N characters in non-decreasing order.
Input

Input contains multiple test cases.
Each test case contains a string S and an integer N separated by a space.
Output

Print all the different combinations from the string S of length N in a lexicographic order in a separate line.
Constraints

1 <= length of S <= 30
0 < N <= length of S
The string consists of only lowercase letters.
There can be duplicate characters in S
Number of test cases <= 10

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
using namespace std;

void helper(string s,int n,vector<char> &form,int ref,map<string,int> &m){
    if(n==0){
        vector<char> g;
        for(int i=0;i<form.size();i++){
            g.push_back(form[i]);
        }
        sort(g.begin(),g.end());
        string res;
        for(int i=0;i<g.size();i++){
            res=res+g[i];
        }
        m[res]=1;
        
    }
    else{
        for(int i=ref;i<s.length();i++){
            form.push_back(s[i]);
            helper(s,n-1,form,i+1,m);
            form.pop_back();
        }
    }
}
void solve(string s,int n){
    vector<char> form;
    sort(s.begin(),s.end());
    map<string,int> m;
    helper(s,n,form,0,m);
    auto itr=m.begin();
    while(itr!=m.end()){
        cout<<itr->first<<endl;
        itr++;
    }
}
int main(){
    string s;
    int n;

    while(cin>>s>>n){
       solve(s,n);
    }
}