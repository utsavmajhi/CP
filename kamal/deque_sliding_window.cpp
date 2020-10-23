#include <iostream>
#include <deque> 
#include<bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> q;
    for(int i=0;i<n;i++){
        if((i>=k)&&(q.front()==i-k)){
            q.pop_front();
        }
        while((!q.empty())&&(arr[i]>arr[q.back()])){
            q.pop_back();
        }
        q.push_back(i);
        if(i>=k-1){
            cout<<arr[q.front()]<<" ";
        }
    }
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
