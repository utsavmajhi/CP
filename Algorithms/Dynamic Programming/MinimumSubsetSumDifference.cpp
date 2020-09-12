/*
Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.
If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.

Example:

Input:  arr[] = {1, 6, 11, 5} 
Output: 1
Explanation:
Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11    

*/



#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std; 

int minimumsubsetsumdiff(int arr[],int n){
    int range=0;
    for(int i=0;i<n;i++){
        range=range+arr[i];
    }

    bool dp[n+1][range+1];
    for(int row=0;row<n+1;row++){
        dp[row][0]=true;
    }
    for(int col=1;col<range+1;col++){
        dp[0][col]=false;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<range+1;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
   
    //matrix got completed above
    vector<int> valsubsetsum;
    for(int col=0;col<range+1;col++){
        if(dp[n][col]==true){
            valsubsetsum.push_back(col);
        }
    }
    //cout<<valsubsetsum.size()<<endl;
    int minsum=INT32_MAX;
    for(int i=0;i<valsubsetsum.size()/2;i++){
        minsum=min(minsum,range-(2*valsubsetsum[i]));
    }
    return minsum;


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Minimum Subset sum= "<<minimumsubsetsumdiff(arr,n);


}