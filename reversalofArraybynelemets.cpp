#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int d=0;
	cin>>d;
	int t[d];
	
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	if(d>n){
	    d=d-n;
	}
	for(int j=0;j<d;j++){
	    t[j]=a[n-d+j];
	}
	for(int i=n-d-1;i>=0;i--)
	{
	    a[i+d]=a[i];
	}
	for(int i=0;i<d;i++){
	    a[i]=t[i];
	}
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
    return 0;
}