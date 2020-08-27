    #include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n]={0};
    string s;
    cin>>s;
    for(int i=0;i<=s.length()-n;i++){
        int k=i;
        int count=0;
        
        while(count<n){
            a[count]=a[count]+(int)s[k]-48;
            k++;
            count++;
            
        }
      
        
        
    }
    for(int i=0;i<n;i++){
        
        if(a[i]==0){
            cout<<0;
        }
        else{
            if(a[i]==1){
                cout<<1;
            }else{
                cout<<1;
            }
        }
       
    }
}

int main(){

    int t;
    cin>>t;
    while(t--){
       solve();
       cout<<endl;
    }
}