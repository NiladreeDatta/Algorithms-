#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    /*Insertion sort*/

    for(int i = 2 ; i <= n ; i++)
    {
        int key = a[i];
        int j = i-1;
        while(j >= 1 and a[j] > key)
        {
            a[j+1] = a[j];
            j -= 1;
        }
        a[j+1] = key;
    }
    for(int i = 1 ; i <= n ; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
