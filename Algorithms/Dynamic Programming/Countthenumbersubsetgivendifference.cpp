#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std; 

int countsubsetwithgivendiff(int arr[],int diff,int n){
    /*
    s1-s2=diff && s1+s2=sum of array,,,Eqn1+Eqn2,we get s1=(diff+sumofarray)/2
    so basically count those subsets whose sum is diff+sumofaaray/2
    */

   int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        }
    int columns=((diff+sum)/2)+1;
    int dp[n+1][((diff+sum)/2)+1];
    //initialisation
    for(int row=0;row<n+1;row++){
        dp[row][0]=1;
    }
    for(int col=1;col<columns;col++){
        dp[0][col]=0;
    }
    //initialisation complete
    for(int i=1;i<columns;i++){
        for(int j=1;j<n+1;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    //matrix complete
    return dp[n][(diff+sum)/2];
}
int main(){
    int n,diff;
    cin>>n>>diff;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countsubsetwithgivendiff(arr,diff,n);

}