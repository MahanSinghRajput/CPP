#include<iostream>
using namespace std;
void dfs(int node, vector<int> adj[], vector<bool> &visited, vector<int> &result) {
    visited[node] = true;
    result.push_back(node);
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, result);
        }
    }
}
vector<int> dfs(vector<int> adj[], int V){
    int start = 0;
    vector<bool> visited(V, false);
    vector<int> result;
    dfs(start, adj, visited, result);
    return result;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adjList[n+1];
    for(int i = 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        if (u < 1 || u > n || v < 1 || v > n) continue;
        adjList[u].push_back(v); 
        adjList[v].push_back(u);
    }
}