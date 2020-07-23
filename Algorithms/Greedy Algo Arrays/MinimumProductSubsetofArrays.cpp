#include <iostream>
#include <string>
#include <algorithm>
#include<math.h>
using namespace std;

int solve(int arr[],int size){
    int minneg=INT32_MAX;
    int maxneg=INT32_MIN;
    int minpos=INT32_MAX;
    int allprod=1;
    int countpos=0,countneg=0,countzero=0;
    for(int i=0;i<size;i++){
        if(size==1){
            return arr[0];
        }
        if(arr[i]<0){

            minneg=min(minneg,arr[i]);
            maxneg=max(maxneg,arr[i]);
            countneg++;
        }
        if(arr[i]>0){
            minpos=min(minpos,arr[i]);
            countpos++;
        }
        if(arr[i]==0){
            countzero++;
        }
        allprod=allprod*arr[i];
    }
    if((countzero==size )||(countzero!=0 && countneg==0)){
        return 0;
    }
    if(countneg==0){
        return minpos;
    }
    if(countneg %2==0 && countzero==0){
            return allprod/maxneg;
    }
    if((countneg % 2==1) && countzero==0){
        return allprod;
    }
    if((countneg % 2==1) && countzero!=0){
        allprod=1;
        for(int i=0;i<size;i++){
            if(arr[i]!=0){
                allprod=allprod*arr[i];
            }
        }
        return allprod;
    }
    if(countneg %2==0 && countzero!=0){
        allprod=1;
        for(int i=0;i<size;i++){
            if(arr[i]!=0){
                allprod=allprod*arr[i];
            }
        }
            return allprod/maxneg;
    }
    return allprod;
}


int main(){

    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int minprodsub=solve(a,size);
    cout<<minprodsub<<endl;
    
}