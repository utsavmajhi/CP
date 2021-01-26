#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <queue>
using namespace std; 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res[n];
    int p=0;
    for(int i=0;i<=n/2;i++){
        res[p]=arr[i];
        p=p+2;
    }
    p=1;
    for(int i=n-1;i>=n/2;i--){
        res[p]=arr[i];
        p=p+2;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}