#include<bits/stdc++.h>
using namespace std;
const int mx = 10000;
vector < pair<int,int> > adj[mx];
int n,m,a,b,w;
int main()
{
    cin >> n >> m;
    while(m--)
    {
        cin >> a >> b >> w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    priority_queue < pair<int ,int > , vector<pair<int,int> > , greater<pair<int,int > > > pq;
    vector <int> dist(n+1,1e9);
    pq.push({0,1});
    dist[1] = 0;
    while(!pq.empty())
    {
        int cur = pq.top().second;
        int cur_d = pq.top().first;
        pq.pop();

        for(pair <int , int> edge : adj[cur])
        {
            if(cur_d + edge.second < dist[edge.first])
            {
                dist[edge.first] = cur + edge.second;
                pq.push({dist[edge.first] , edge.first });
            }
        }
    }
    for(int i = 1 ; i <= n ; i++)
        cout << dist[i] << " ";
    cout << endl;
    return 0;
}
