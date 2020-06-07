#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+10;
bool vis[mx];
vector <int> adj[mx];
int n,m,u,v,timer = 0;
int in[mx],low[mx];

void dfs(int node,int parent)
{
    vis[node] = true;
    in[node] = low[node] = timer++;

    for(int child : adj[node])
    {
        if(child == parent) continue;
        if(vis[child] == true)
        {
            // edge node -> child is a back edge
            low[node] = min(low[node],in[child]);
        }
        else
        {
            //edge node-> child is a forward edge
            dfs(child,node);

            if(low[child] > in[node])
            {
                cout << node << " - " << child << " is a bridge" << endl;
            }
            low[node] = min(low[node],low[child]);
        }
    }

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
    dfs(1,-1);
    return 0;
}
