#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
using namespace std;

void permute(string s,vector<char> res,int n,map<string,int> &m){
    if(n==0){
        for(int i=0;i<res.size();i++){
            auto itr=m.find("res");
            if(itr!=m.end()){
                m["res"]=m["res"]+1;
            }else{
                m.insert(make_pair("res",1));
            }
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            res.push_back(s[i]);
            permute(s,res,n-1,m);
            res.pop_back();
        }
    }
    
}
int main(){
    string s;
    vector<char> form;
    cin>>s;
    map<string,int> m; 
    int len=s.length();
    while(len!=0){
        permute(s,form,len,m);
        s.pop_back();
        len=len-1;
    }
    cout<<m["res"]<<endl;
}