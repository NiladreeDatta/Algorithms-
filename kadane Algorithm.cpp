#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int max_end_here = 0;
    int max_so_far = 0;
    for(int i = 0 ; i < n ; i++)
    {
        max_end_here += a[i];
        if(max_end_here < 0)
        {
            max_end_here = 0;
        }
        /*else if(max_end_here > max_so_far)
        {
            max_so_far = max_end_here;
        }*/
        max_so_far = max(max_so_far,max_end_here);
    }
    cout << max_so_far << endl;


    return 0;
}
