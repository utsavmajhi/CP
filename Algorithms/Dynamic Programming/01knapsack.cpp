/*
0-1 Knapsack Problem solution using recursion(Overlapping Subproblems).

link:https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/

 Given weights and values of n items, 
 put these items in a knapsack of capacity W 
 to get the maximum total value in the knapsack. 
 In other words, given two integer arrays val[0..n-1] and wt[0..n-1] 
 which represent values and weights associated with n items respectively. 
 Also given an integer W which represents knapsack capacity, 
 find out the maximum value subset of val[] such 
 that sum of the weights of this subset is smaller than or equal to W. 
 You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).
 INPUT:
size=3
W=50
val[]={60 100 120}
wt[]={10 20 30}
OUTPUT:220
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>~

using namespace std; 

int knapsack(int val[],int wt[],int w,int n){
    int t[n+1][w+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(wt[i-1]<=j){ 
                int k1=val[i-1]+(t[i-1][j-wt[i-1]]);
                int k2=t[i-1][j];
                t[i][j]=max(k1,k2);
            }else{
                t[i][j]=t[i-1][j];
            }
        }
    }    
    return t[n][w];
}



int main(){

    int n,w;
    cin>>n;
    cin>>w;
    int val[n];
    int wt[n];
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    cout<<knapsack(val,wt,w,n);
}