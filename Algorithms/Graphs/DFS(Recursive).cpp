#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std; 
  
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 



void DFSUtil(int s,vector<int> adj[],vector<bool> &visited){
     visited[s]=true;
     cout<<s<<" ";
     for(auto i=adj[s].begin();i!=adj[s].end();i++){
         if(!visited[*i]){
             DFSUtil(*i,adj,visited);
         }
     }

}
    void DFS(int v,vector<int> adj[],int start){
        vector<bool> visited(v,false);
        DFSUtil(start,adj,visited);
    }

int main() 
{ 
    int V = 4; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 2, 0); 
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3); 
    DFS(4,adj,2);
   // printGraph(adj, V); 
    return 0; 
} 