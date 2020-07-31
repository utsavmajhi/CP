#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;
const unsigned int M = 1000000007;
int main(){
    long long n,q;
    cin>>n>>q;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int p[n+1];
    long long int sum=0;
    p[0]=0;
    for(int i=1;i<n+1;i++){
                p[i]=a[i-1]+p[i-1];
            }
    while(q--){
        long long int t,l,r;
        cin>>t>>l>>r;
        if(t==1){
            
            for(long long int i=l-1;i<r;i++){
                a[i]==0?a[i]=1:a[i]=0;
            }
                for(long long int i=1;i<n+1;i++){
                p[i]=a[i-1]+p[i-1];
                
            }
        }
        else{
            for(long long int i=l;i<r+1;i++){
                sum=(sum+p[i])%M;
            }
            cout<<sum<<endl;
            sum=0;
        }
    }

}