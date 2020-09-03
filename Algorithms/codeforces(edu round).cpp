#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;

void solve(){
    string s;
    int n;
    
    cin>>s>>n;
    int np=0;
    vector<char> res(s.length(),'p');
    int no1=0;
    int no0=0;
    for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                no1++;
            }else{
                no0++;
            }
            if(i-n>=0){
                if(s[i]=='1'){
                    if(res[i-n]=='0'){
                        cout<<-1<<endl;
                        np=1;
                        break;
                    }else{
                        res[i-n]='1';
                    }
                    
                }
                else{
                    if(res[i-n]=='1'){
                        cout<<-1<<endl;
                         np=1;
                        break;
                    }else{
                        res[i-n]='0';
                    }
                   
                }
            }else{
                //for i+n
                if((i+n)<s.length()){
                    if(s[i]=='1'){
                        if(res[i+n]=='0'){
                            cout<<-1<<endl;
                             np=1;
                            break;
                        }else{
                            res[i+n]='1';
                        }
                             
                }
                else{
                    if(res[i+n]=='1'){
                       cout<<-1<<endl;
                        np=1;
                        break; 
                    }else{
                        res[i+n]='0';
                    }
                    
                }
            
                }

            }
        }
        if(np==0){
for(int i=0;i<res.size();i++){
           if(res[i]=='p'){
               if(no1>0){
                   res[i]='1';
                   no1--;
               }else{
                   if(no0>0){
                       res[i]='0';
                       no0--;
                   }
               }
           }
       }
       for(int i=0;i<res.size();i++){
           cout<<res[i];
       }
       cout<<endl;
        }
       
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}