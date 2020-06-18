#include<bits/stdc++.h>
using namespace std;
int n,m,u,v;
int in[1000];
vector <int> res;
vector <int> adj[1000];
void kahn(int n)
{
    queue<int> q;
    for(int i = 1 ; i <= n ; i++)
        if(in[i] == 0)
            q.push(i);

    while(!q.empty())
    {
        int cur = q.front();
        res.push_back(cur);

        q.pop();

        for(int node : adj[cur])
        {
            in[node]--;
            if(in[node] == 0)
                q.push(node);
        }
    }
    cout << "Topological sort : ";
    for(int i = 0 ; i < res.size() ; i++)
        cout << res[i] << " ";
    cout << endl;

}
int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        in[v]++;
    }
    kahn(n);


    return 0;
}
