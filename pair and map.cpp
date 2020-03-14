using namespace std;

int main()
{

    pair < int, int > p;

    p = { 1, 2 };

    cout << p.first << " " << p.second << endl; /// 1 2

    vector < pair < int, int > > v;
    v.push_back( { 3, 4 } );
    v.push_back( { 1, 2 } );
    v.push_back( { 3, 5 } );

    for ( auto u : v ) cout << u.first << " " << u.second << endl;
    /**

    1 2
    3 4
    3 5

    **/

    map < int, int > m;

    m[10] = 20;
    m[123455566] = 23;

    cout << m[10] << " " << m[123455566] << endl; /// 20 23

    map < string, int > id;

    id["niladree"] = 76;

    cout << id["niladree"] << endl; /// 76



}
