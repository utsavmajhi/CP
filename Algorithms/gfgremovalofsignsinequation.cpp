/*
Simplify a given algebraic string of characters, ‘+’, ‘-‘ operators and parentheses. Output the simplified string without parentheses.

Examples:

Input : "a-(b+c)"
Output : "a-b-c"

Input : "a-(b-c-(d+e))-f"
Output : "a-b+c+d+e-f" 

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <queue>
using namespace std; 

int main(){
    string s;
    cin>>s;
    char currentsign='+';
    stack<char> stac;
    stac.push('+');
    for(int i=0;i<s.length();i++){
        
        if(s[i]=='+'&&currentsign=='-'){
            s[i]='-';
        }else{
            if(s[i]=='-'&&currentsign=='-'){
            s[i]='+';
        }
        }
        
        if(s[i]=='-'||s[i]=='+'){
            stac.push(s[i]);
        }
        if(s[i]=='('){
            if(!stac.empty()){
                if(stac.top()=='-'){
                    currentsign='-';
                }else{
                    currentsign='+';
                    stac.push('+');
                }
            }
        }
        if(s[i]==')'){
            if(!stac.empty()){
                stac.pop();
            }
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]==')')
        {
            
        }else{
                cout<<s[i];
        }
        
    }
    
}