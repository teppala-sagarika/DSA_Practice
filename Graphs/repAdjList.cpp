#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m; //nodes edges
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;//nodes
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); //this line wont be for directed graph
    }
    return 0;
}