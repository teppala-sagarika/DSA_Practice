#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int n,vector<int> adj[]){
    int visit[n]={0};
    visit[0]=1;
    queue<int> q;
    q.push(0);
    vector<int> ans;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto i:adj[node]){
            if(!visit[i]){
                visit[i]=1;
                q.push(i);
            }
        }
    }
    return ans;
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
    vector<int> traversal;
    traversal=bfs(n,adj);
    for(int i=0;i<n;i++){
        cout<<traversal[i]<<" ";
    }
}