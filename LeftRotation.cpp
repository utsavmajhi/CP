#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverseArray(int arr[],int start,int end){
    while(start<end){
        int temp= arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    d=d%n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //Applying Reversal Algorithm
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);

    //Printing the Rotated Array
    printArray(arr,n);

    return 0;

}
