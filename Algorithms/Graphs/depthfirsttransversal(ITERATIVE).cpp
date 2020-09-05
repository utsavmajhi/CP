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
     stack<int> stk;
     stk.push(s);
     //visited[s]=true;
    while(!stk.empty()){
        s=stk.top();
        stk.pop();
        if(!visited[s]){
            cout<<s<<" ";
            visited[s]=true;
        }
        for(auto i=adj[s].begin();i!=adj[s].end();i++){
            if(!visited[*i]){
                stk.push(*i);
            }
        }

    }

}
    void DFS(int v,vector<int> adj[]){
        vector<bool> visited(v,false);
        for(int i=0;i<visited.size();i++){
            if(!visited[i]){
                DFSUtil(i,adj,visited);
            }
        }
    }

int main() 
{ 
    int V = 5; 
    vector<int> adj[V]; 
    addEdge(adj, 1, 0); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 2, 1); 
    addEdge(adj, 0, 3); 
    addEdge(adj, 1, 4); 
    DFS(5,adj);
   // printGraph(adj, V); 
    return 0; 
} 