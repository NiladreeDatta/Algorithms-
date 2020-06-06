#include<bits/stdc++.h>
using namespace std;
int n,m;
const int mx = 1e5;
bool vis[mx];
int in[mx],out[mx];
vector <int> adj[mx];
int timer = 1;
void dfs(int u)
{
    vis[u] = true;
    in[u] = timer++;
    for(int i = 0 ; i < adj[u].size() ; i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
    out[u] = timer++;
}

int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    for(int i = 1 ; i <= n ; i++)
        cout << in[i] << " ";
    cout << endl;
    for(int i = 1 ; i <= n ; i++)
        cout << out[i] << " ";
    cout << endl;

    return 0;
}
