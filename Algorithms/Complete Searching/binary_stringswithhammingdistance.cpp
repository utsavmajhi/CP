#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <bitset>
#include <map>
#include<set>
using namespace std;
void permute(string t,int n,int h,set<string> &res,int level){
    
        for(int i=level;i<t.length();i++){
            if(i!=level&&t[i]==t[level]){
                continue;
            }
            swap(t[i],t[level]);
            res.insert(t);
            permute(t,n-1,h,res,level+1);
        }
    
}


void solve(){
    int n,h;
    cin>>n>>h;
    string t;
    int level=0;
    for(int i=0;i<n;i++){
        t=t+'0';
    }
    for(int j=0;j<h;j++){
        t[j]='1';
    }
    set<string> res;
    permute(t,n,h,res,0);
    
    auto itr=res.begin();
    while(itr!=res.end()){
        cout<<*itr<<endl;
        itr++;
    }
    res.clear();

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}