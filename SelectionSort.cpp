#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    cout<<"Enter length of array"<<endl;
    int n;
    cin>>n;
    int temp=0;
    cout<<"Enter elemts of array to sort using selection sort"<<endl;
    int a[n];
    int pos=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int small=0;
    for(int i=0;i<n;i++){
        pos=i;
        for(int j=i+1;j<n;j++){
              if(a[pos]>a[j]){
                  pos=j;
              }  
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}