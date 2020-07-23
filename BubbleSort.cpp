#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
        cout<<"Enter length of array"<<endl;
    int n;
    cin>>n;
    int temp=0;
    cout<<"Enter elemts of array to sort using Bubble sort"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}