/*
Given an unsorted array of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Note: If you find multiple answers then print the Smallest number found. Also, expected solution is O(n) time and constant extra space.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print B, the repeating number followed by A which is missing in a single line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ A[i] ≤ N

Example:
Input:
2
2
2 2
3 
1 3 3

Output:
2 1
3 2

Explanation:
Testcase 1: Repeating number is 2 and smallest positive missing number is 1.
Testcase 2: Repeating number is 3 and smallest positive missing number is 2.
 

42
4 19 2 41 36 30 27 11 18 24 9 16 34 14 40 23 20 25 22 1 33 15 31 21 5 8 37 29 7 12 32 39 6 34 3 10 26 17 13 42 38 35*/

#include <iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(a[abs(a[i])-1]>0){
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        }else{
            cout<<abs(a[i])<<" ";
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<i+1<<endl;
            
        }
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}