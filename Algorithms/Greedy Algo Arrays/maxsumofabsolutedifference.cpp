// Given an array, we need to find the maximum sum of absolute difference of any permutation of the given array.

// Examples:

// Input : { 1, 2, 4, 8 }
// Output : 18
// Explanation : For the given array there are 
// several sequence possible
// like : {2, 1, 4, 8}
//        {4, 2, 1, 8} and some more.
// Now, the absolute difference of an array sequence will be
// like for this array sequence {1, 2, 4, 8}, the absolute
// difference sum is 
// = |1-2| + |2-4| + |4-8| + |8-1|
// = 14
// For the given array, we get the maximum value for
// the sequence {1, 8, 2, 4}
// = |1-8| + |8-2| + |2-4| + |4-1|
// = 18
#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    vector<int> v1;
    int n;
    int temp=0;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        v1.push_back(temp);
    }
    sort(v1.begin(),v1.end());
    vector<int> v2;
    for(int i=0;i<(v1.size()%2==0?v1.size():v1.size()+1)/2;i++){
            v2.push_back(v1[v1.size()-1-i]);
            v2.push_back(v1[i]);
        
    }
    if(v1.size()%2!=0){
        v2.pop_back();
    }
    int sum=0;
    int sec=0;
    for(int i=0;i<v2.size();i++)
    {
        sec=sec+1;
        if(sec>=v2.size()){
            sec=sec-v2.size();
        }
        sum=sum+ abs(v2[i]-v2[sec]);
      
    }
    cout<<"MAX ABS SUM: "<<sum<<endl;

}