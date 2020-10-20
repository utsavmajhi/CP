
/*
Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

Input:
First line of input contains a single integer T, the number of test cases.
Each test is a single line containing a string S composed of only lowercase English alphabet.
Output:
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.
Constraints:
1 ≤ T ≤ 100
2 ≤ |S| ≤ 1000, where |S| denotes the length of S
Example:
Input:
6
gaga
abcde
rotor
xyzxy
abbaab
ababc


Output:
YES
NO
YES
YES
NO
NO

*/
#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include<set>
#include <map>
using namespace std;


 void solve(){
     string s;
     cin>>s;
     map<char,int> m;
     if(s.length()%2==0){
         for(int i=0;i<(s.length()/2);i++){
             auto itr=m.find(s[i]);
             if(itr!=m.end()){
                 m[s[i]]=m[s[i]]+1;

             }else{
                 m.insert(make_pair(s[i],1));
             }
         }
         for(int i=s.length()/2;i<s.length();i++){
             auto itr=m.find(s[i]);
             if(itr!=m.end()){
                 m[s[i]]=m[s[i]]-1;

             }else{
                 m.insert(make_pair(s[i],1));
             }
         }
         auto itr2=m.begin();
         while(itr2!=m.end()){
             if(itr2->second!=0){
                
                 cout<<"NO"<<endl;
                 return;
             }
             itr2++;
         }
         cout<<"YES"<<endl;
         return;

     }
     else{
         for(int i=0;i<((s.length()+1)/2)-1;i++){
            auto itr=m.find(s[i]);
             if(itr!=m.end()){
                 m[s[i]]=m[s[i]]+1;

             }else{
                 m.insert(make_pair(s[i],1));
             } 
         }
         for(int i=(s.length()+1)/2;i<s.length();i++){
             auto itr=m.find(s[i]);
             if(itr!=m.end()){
                 m[s[i]]=m[s[i]]-1;

             }else{
                 m.insert(make_pair(s[i],1));
             }
         }
         auto itr2=m.begin();
         while(itr2!=m.end()){
             if(itr2->second!=0){
                 cout<<"NO"<<endl;
                 return;
             }
             itr2++;
         }
         cout<<"YES"<<endl;
         return;
     }
 }


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}