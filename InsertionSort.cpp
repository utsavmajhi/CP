//Remember in insertion we assume that the input array's first element is already sorted for first time.eg:[6,5,3,1,8,7,4]
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    cout<<"Enter length of array"<<endl;
    int n;
    cin>>n;
    int temp=0;
    cout<<"Enter elemts of array to sort using Insertion sort"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key=0;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}