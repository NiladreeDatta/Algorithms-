#include<bits/stdc++.h>
using namespace std;
const int mx = 1001;
vector <int> adj[mx];
int vis[mx],dis[mx];

void dfs(int node,int d)
{
    vis[node] = 1;
    dis[node] = d;
    for(int child : adj[node])
    {
        if(!vis[child])
            dfs(child,dis[node]+1);
    }
}

int main()
{
    int n,m;
    cin >> n ;
    for(int i =0 ; i < n-1 ; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    cin >> m;
    int ans = -1,mindis = 1e9+200;
    while(m--)
    {
        int city;
        cin >> city;
        if(dis[city] < mindis)
            mindis = dis[city], ans = city;
        else if(dis[city] == mindis and city < ans)
            ans = city;
    }
    cout << ans << endl;
    return 0;
}
