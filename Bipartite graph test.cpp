#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+10;
bool vis[mx];
int col[mx];
vector <int> adj[mx];
int n,m,u,v;

bool dfs(int u,int c)
{
    vis[u] = true;
    col[u] = c;
    for(int child : adj[u])
    {
        if(!vis[child])
        {
            if(dfs(child,c^1) == false)
                return false;
        }
        else
        {
            if(col[v] == col[child])
                return false;
        }
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}
