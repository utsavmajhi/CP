
#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
	int n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int monk=INT32_MIN;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(b[j]>=a[i]){
				monk=max(j-i,monk);
			}
		}
	}
	if(monk==INT32_MIN){
		cout<<0<<endl;
	}
	else{
		cout<<monk<<endl;
	}
	
}
int main() {
	int t;
	cin>>t;
	while(t--){
		solve();
	}		
}
