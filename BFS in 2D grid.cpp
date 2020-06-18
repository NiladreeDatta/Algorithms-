#include<bits/stdc++.h>
using namespace std;
const int mx = 1000;
bool vis[mx][mx];
int dis[mx][mx];
int n,m;
int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};
queue < pair<int,int> > q;

bool is_valid(int x,int y)
{
    if(x < 1 || x > n || y < 1 || y > m )
        return false;
    if(vis[x][y]) return false;
    return true;
}

void bfs(int srcX,int srcY)
{
    q.push({srcX,srcY});
    dis[srcX][srcY] = 0;
    vis[srcX][srcY] = true;
    while(!q.empty())
    {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            if(is_valid( curX + dx[i] , curY + dy[i]))
            {
                int newX = curX + dx[i];
                int newY = curY + dy[i];

                dis[newX][newY] = dis[curX][curY] + 1;
                vis[newX][newY] = true;
                q.push({newX,newY});
            }
        }
    }
    cout << "Distance array : " << endl;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{
    cin >> n >> m;
    bfs(1,1);
    return 0;
}
