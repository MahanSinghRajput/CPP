#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    //adjacency matrix representation // SC O(n^2)
    int adj[n+1][n+1];
    for(int i = 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1; //if you want to represent weight then adj[u][v] = weight;
        adj[v][u] = 1; //for undirected graph
    }

    //adjacency list representation // SC O(2*E)
    vector<int> adjList[n+1];
    for(int i = 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        if (u < 1 || u > n || v < 1 || v > n) continue;
        adjList[u].push_back(v); //if you want to represent weight then use pair<int,int> and store weight along with node
        adjList[v].push_back(u); //for undirected graph
    }
}