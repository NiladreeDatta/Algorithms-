#include<bits/stdc++.h>
using namespace std;


#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    set < int > s;
    s.insert ( 1 ); /// log2(n)
    s.insert ( 2 );
    s.insert ( 2 );

    cout << s.size() << endl; /// 2;

    for ( auto u : s ) cout << u << " "; /// 1 2
    cout << endl;

    set < int > :: iterator it;
    for ( it = s.begin(); it != s.end(); it++ ) cout << *it << " "; /// 1 2
    cout << endl;

    s.erase( 2 );
    cout << s.size() << endl; /// 1
    for ( auto u : s ) cout << u << " "; /// 1
    cout << endl;

    s = { 1, 2, 3, 4, 5, 5 };

    s.erase( s.begin() ); /// log2(n)

    cout << s.size() << endl; /// 4
    for ( auto u : s ) cout << u << " "; /// 2 3 4 5
    cout << endl;

    s.erase( --s.end() ); /// log2(n)

    cout << s.size() << endl; /// 3
    for ( auto u : s ) cout << u << " "; /// 2 3 4
    cout << endl;

    cout << *s.begin() << endl; /// 2
    cout << *( --s.end() ) << endl; /// 4
    cout << *( s.rbegin() ) << endl; /// 4

    cout << s.count( 2 ) << endl; /// 1 ( log2(n) )
    cout << s.count( 10 ) << endl; /// 0

    cout << s.empty(); /// 0;


    return 0;
}
