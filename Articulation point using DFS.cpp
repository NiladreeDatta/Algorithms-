#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+10;
bool vis[mx];
vector <int> adj[mx];
int low[mx];
int in[mx];
int timer = 1;
set <int> st;

void dfs(int v,int p = -1)
{
    vis[v] = true;
    in[v] = low[v] = timer++;
    int children= 0 ; // number of subtree routed on node v
    for(int to : adj[v])
    {
        if(to == p) continue;
        if(vis[to] == true)
        {
            //this is a back edge
            low[v] = min(low[v],in[to]);
        }
        else
        {
            //this is a forward edge
            dfs(to,v);
            low[v] = min(low[v],low[to]);
            if(low[to] >= in[v] and p != -1)
            {
                st.insert(v);
            }
        }

    }
    if(p == -1 and children > 1)
        st.insert(v);

}

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    cout << "The number of articulation point is : " << st.size() << endl;
    cout << "The articulation points are : ";
    for(int i : st)
    {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}
