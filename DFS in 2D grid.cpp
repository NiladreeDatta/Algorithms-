#include<bits/stdc++.h>
using namespace std;
int n,m;
bool vis[1000][1000];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
bool isValid(int x, int y)
{
    if(x < 1 || x > n || y < 1 || y > m) return false;
    if(vis[x][y])
        return false;
    return true;
}
void dfs(int x , int y)
{
    vis[x][y]  =1;
    cout << x << " " << y << endl;
    if(isValid(x-1,y))
        dfs(x-1,y);//up
    if(isValid(x+1,y))
        dfs(x+1,y);//down
    if(isValid(x,y-1))
        dfs(x,y-1);//left
    if(isValid(x,y+1))
        dfs(x,y+1);//right

}
void dfs_new(int x , int y)
{
    vis[x][y]  =1;
    cout << x << " " << y << endl;
    for(int i = 0 ; i < 4 ; i++)
    {
        if(isValid(x+dx[i],y+dy[i]))
            dfs(x+dx[i],y+dy[i]);
    }

}
int main()
{
    cin >> n >> m;
    dfs_new(1,1);


    return 0;
}
