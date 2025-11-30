#include<iostream>
using namespace std;
int connectedComponents(vector<int> adjList[], int n){
    // Function to find connected components in an undirected graph
    // Implementation goes here
    vector<bool> visited(n + 1, false);
    int components = 0;
    for (int i = 1; i <= n; ++i) {
        if (i < 0 || i > n) continue;
        if (!visited[i]) {
            ++components;
            // iterative DFS using a vector as a stack
            vector<int> st;
            st.push_back(i);
            while (!st.empty()) {
                int u = st.back();
                st.pop_back();
                if (visited[u]) continue;
                visited[u] = true;
                for (int v : adjList[u]) {
                    if (!visited[v]) st.push_back(v);
                }
            }
        }
    }
    return components;
    return 0;
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