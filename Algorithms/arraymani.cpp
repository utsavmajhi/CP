/*
Given an array of integers, you have to print a number which can be written as sum of squares of two different pairs of numbers present in the array.It was assured that such a number always exists & is unique in the input.max_Arr_size=100

E.g.: if input  Arr: [0, 3, 4, 5, 9, 12, 6], the code should print 25 as : 0^2 + 5^2 = 25 = 3^2 + 4^2

*/


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <queue>
using namespace std; 

int main(){
    int n;
    cin>>n;
    map<int,int> m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sq=(arr[i]*arr[i])+(arr[j]*arr[j]);
            auto itr=m.find(sq);
            if(itr!=m.end()){
                res=sq;
            }else{
                m.insert(make_pair(sq,1));
            }
        }
    }
    cout<<res<<endl;
}