#include <iostream> 
#include <algorithm>
#include <math.h>
#include <map>
#include<set>
#include <vector>
#include <forward_list>
#include <climits>
using namespace std;
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
} 
void maxdiff(vector<int> adj[],int v){
    map<int,int> m1;
    map<int,int> m2;
    int maxdif=INT_MIN;
    for(int i=0;i<v;i++){
        m2.insert(make_pair(i,adj[i].size()));
        for(int j=0;j<adj[i].size();j++){
        auto itr=m1.find(adj[i][j]);
        if(itr!=m1.end()){
            m1[i]=m1[i]+1;
        }else{
            m1.insert(make_pair(adj[i][j],1));
        }
    }
      
    }
    int res=0;
    for(int i=0;i<v;i++){
        cout<<m2[i]-m1[i]<<'\n';
        if(maxdif<(m2[i]-m1[i])){
            maxdif=m2[i]-m1[i];
            res=i;
        }
    }
    cout<<res;
}
int main(){
     int N;
    cin>>N;
    vector<int> adj[N];
    for(int i=0;i<N;i++){
        int v;
        cin>>v;
        int t;
        cin>>t;
        while(t!=-1){
            addEdge(adj,v,t);
            cin>>t;
        }
        
    }
    maxdiff(adj,N);
    
}