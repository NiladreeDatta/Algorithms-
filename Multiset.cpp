#include<bits/stdc++.h>
using namespace std;


#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    multiset < int > m;
    m.insert ( 1 ); /// log2(n)
    m.insert ( 2 );
    m.insert ( 2 );

    cout << m.size() << endl; /// 3

    for ( auto u : m ) cout << u << " "; /// 1 2 2
    cout << endl;

    multiset < int > :: iterator it;
    for ( it = m.begin(); it != m.end(); it++ ) cout << *it << " "; /// 1 2 2
    cout << endl;

    m = { 1, 2, 2, 3, 3, 3 };

    m.erase( 2 );

    cout << m.size() << endl; /// 4
    for ( auto u : m ) cout << u << " "; /// 1 3 3 3
    cout << endl;

    auto d = m.find(3); /// log2(n)
    m.erase( d ); /// log2(n)


    cout << m.size() << endl; /// 3
    for ( auto u : m ) cout << u << " "; /// 1 3 3
    cout << endl;


    cout << m.count( 3 ) << endl; /// 2 ( log2(n) )

    cout << m.empty() << endl; /// 0


    return 0;
}
