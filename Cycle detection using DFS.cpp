#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+10;
bool vis[mx];
vector <int> adj[mx];
int n,m,u,v,timer = 0;

bool dfs(int node,int par)
{
    vis[node] = true;
    for(int child : adj[node])
    {
        if(!vis[child])
        {
            if(dfs(child,node) == true)
                return true;
        }
        else
        {
            if(child != par)
                return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> m ;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ok = dfs(1,-1);
    if(ok) cout << "Contains cycle" << endl;
    else cout << "Not cycle" << endl;
    return 0;
}

