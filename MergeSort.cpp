#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Merge(int left[],int right[],int arr[],int lsize,int rsize,int arrsize){
    int i,j,k=0; //i -> array left j-> array right, k-> array actual(arr)
    while(i<lsize&&j<rsize){
        if(left[i]<right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[i];
            j++;
        }
        k++;
    }
    //condition when either of them is exhausted completely
    while(i<lsize){
        arr[k]=left[i];
        i++;
        k++;
    }
        while(j<rsize){
        arr[k]=right[i];
        j++;
        k++;
    }
        for(int m=0;m<arrsize;m++){
        cout<<arr[m]<<" ";
    }

}




void sort(int arr[],int size){
    if(size<2){
        return;
    }
    else{
        int mid=size/2;
        int left[mid];
        int right[size-mid];
        for(int i=0;i<mid;i++){
            left[i]=arr[i];
        }
        for(int i=mid;i<size;i++){
            right[i]=arr[i];
        }
        int sizeleft=sizeof(left)/sizeof(left[0]);
        int sizeright=sizeof(right)/sizeof(right[0]);
        sort(left,mid);
        sort(right,size-mid);
        Merge(left,right,arr,mid,size-mid,size);
        cout<<arr[3]<<endl;
    }
}





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
    int l=sizeof(a)/sizeof(a[0]);
    sort(a,l);
    // for(int i=0;i<l;i++){
    //     cout<<a[i]<<" ";
    // }

}