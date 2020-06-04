#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 10;
bool vis[mx];
vector <int> adj[mx];
vector <int> comp;
//main logic is how many times you run the DFS
int dfs(int node)
{
    comp.push_back(node);
    vis[node] = true;
    for(int i = 0 ; i < adj[node].size() ; i++)
    {
        int v = adj[node][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n-2 ; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        if(!vis[i])
        {
            comp.clear();
            dfs(i);
            cout << "components" << endl;
            for(int i = 0 ; i < comp.size() ; i++)
                cout << comp[i] << " ";
            cout << endl;
        }
    }
    return 0;
}

