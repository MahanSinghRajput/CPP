#include<iostream>
using namespace std;
vector<int> bfs(vector<int> adj[], int V){
    vector<int> bfs;
    int vis[V];
    for(int i = 0; i < V; i++) vis[i] = 0;
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        //take action on node
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
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