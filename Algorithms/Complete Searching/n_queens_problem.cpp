#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
#include <forward_list>
using namespace std;

bool isSafe(vector<vector<int>> &arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int r1=x;
    int c1=y;
    while(r1>=0 && c1>=0){
        if(arr[r1][c1]==1){
            return false;
        }
        r1--;
        c1--;
    }
    r1=x;
    c1=y;
    while(r1>=0 && c1<n){
        if(arr[r1][c1]==1){
            return false;
        }
        r1--;
        c1++;
    }
    return true;
}

bool nqueens(vector<vector<int>> &arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;
            if(nqueens(arr,x+1,n)){
                return true;
            }else{
                arr[x][col]=0;
            }
        }

    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int x;
    int y;
    vector<int> t;
    cin>>x>>y;
    vector<vector<int>> arr;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            t.push_back(0);
        }
        arr.push_back(t);
    }
    if(nqueens(arr,0,n)){
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}