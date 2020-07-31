#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
using namespace std;

int main(){
int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxlength=INT32_MIN;
    cout<<"Enter value of k"<<endl;
    int k;
    cin>>k;
    set<int>s; 
    int c=0,j=0;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int temp=k;
    for(int i=0;i<s.size();i++){
        if(s.find(arr[i]-1)==s.end()){
            j=arr[i];
            while(s.find(j)!=s.end()){
                j++;
                c=j-arr[i];
                maxlength=max(maxlength,c);
                if(s.find(j)==s.end()&&k!=0){
                    s.insert(j);
                    k--;
                }
            }
        }
        k=temp;
    }
    cout<<maxlength<<endl;

}