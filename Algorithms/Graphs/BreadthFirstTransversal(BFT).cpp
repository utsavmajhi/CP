#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std; 
  
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
  
//BFT function

void bft(vector<int> adj[],int s,int v){
     bool visited[v];
     for(int i=0;i<v;i++){
         visited[i]=false;
     }
     queue<int> q;
     q.push(s);
     visited[s]=true;
     while(!q.empty()){
         s=q.front();
         cout<<s<<" ";
         q.pop();
         for(auto i=adj[s].begin();i!=adj[s].end();i++){
             if(visited[*i]==false){
                visited[*i]=true;
                q.push(*i);
             }
         }
     }
     cout<<endl;
     for(int i=0;i<v;i++){
         cout<<visited[i]<<" ";
     }

}


// A utility function to print the adjacency list 
// representation of graph 
void printGraph(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int V = 6; 
    vector<int> adj[V]; 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 2, 1); 
    addEdge(adj, 2, 5); 
    addEdge(adj, 2, 4); 
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6); 
    bft(adj,1,6);
   // printGraph(adj, V); 
    return 0; 
} 