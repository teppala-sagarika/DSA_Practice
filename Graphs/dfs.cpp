#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[],vector<bool> &vis,vector<int> &ls){
    vis[node]=true;
    ls.push_back(node);
    for(int i:adj[node]){
        if(!vis[i])
        dfs(i,adj,vis,ls);
    }
}

int main(){
    int n,m;//nodes //edges
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;//nodes
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n+1, false);
    vector<int> traversal;
    /*dfs(0,n,adj,vis,traversal);
    for(int i=0;i<n;i++){
       cout<<traversal[i]<<" ";
    }*/

    // Handles disconnected graph
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i,adj, vis, traversal);
        }
    }
    for (int node : traversal) {
        cout << node << " ";
    }
}