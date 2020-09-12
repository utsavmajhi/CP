/*
Partition problem is to determine whether a given set can be partitioned into two subsets such that the sum of elements in both subsets is same.
Examples:

arr[] = {1, 5, 11, 5}
Output: true 
The array can be partitioned as {1, 5, 5} and {11}

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std; 
bool subset(int arr[],int sum,int n){
    bool dp[n+1][sum+1];
        //initialising
        for(int i=0;i<n+1;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<sum+1;i++){
            dp[0][i]=false;
        }
        //Case checking
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
}
bool equalSumpartition(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    if(sum%2!=0){
        //not possible
        return false;
    }else{
        //possible
        return subset(arr,sum/2,n);
    }

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(equalSumpartition(arr,n)){
        cout<<"Possible equal subset found"<<endl;
    }else{
        cout<<"Not Possible"<<endl;
    }
    
}