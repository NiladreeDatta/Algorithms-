int floodfill(int x,int y,int c1,int c2)
{
    if(x < 1 || x > n || y < 1 || y > m) return 0;
    if(color[x][y] != 'c1') return 0;
    int ans = 1;
        color[x][y] = c2;
        for(int i = 0 ; i < 8 ; i ++)
        {
            ans += floodfill(x+dx[i],y+dy[i],c2,c1);
        }
        return ans;
}
