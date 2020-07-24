#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;

void solve(int ar[],int n){
    int max=-1,pos=0;
    for(int i=0;i<2*n;i++){
        if(ar[i]>max){
            max=ar[i];
            pos=i;
        }
    }
    vector<char> ch;
    for(int i=0;i<max;i++){
        ch.push_back(i+97);
        cout<<ch[i];
    }
    for(int i=0;i<n;i++){
        if(ar)
    }
}

int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        solve(arr,n);
}
}