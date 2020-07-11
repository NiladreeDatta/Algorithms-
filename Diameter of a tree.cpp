#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5  + 10;
vector <int> adj[mx];
int dis[mx],vis[mx],maxD,maxNode;
void dfs(int node , int d)
{
    vis[node] = 1;
    if(d > maxD) maxD = d, maxNode = node;
    for(int child : adj[node])
    {
        if(!vis[child])
            dfs(child,d+1);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n -1; i ++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    maxD = -1;
    dfs(1,0);
    for(int i = 0 ; i < mx ; i++) vis[i] = 0;
    maxD = -1;
    dfs(maxNode,0);
    cout << maxD << endl;
    return 0;
}

