/*
Count of subsets sum with a Given sum
Given an array arr[] of length N and an integer X, the task is to find the number of subsets with sum equal to X.
Example:

Input: arr[] = {1, 2, 3, 3}, X = 6
Output: 3
All the possible subsets are {1, 2, 3},
{1, 2, 3} and {3, 3}

*/



#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std; 
int subset(int arr[],int sum,int n){
    int dp[n+1][sum+1];
        //initialising
        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<sum+1;i++){
            dp[0][i]=0;
        }
        //Case checking
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
}



int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<subset(arr,sum,n);

}