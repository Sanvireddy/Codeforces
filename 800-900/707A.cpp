#include <bits/stdc++.h>
#define ll long long
#define inf 1000000007
#define inf1 1000000007
#define inf2 163577857
#define pb push_back
#define mp make_pair
#define rep(i, a) for (__typeof(a) i = 0; i < a; i += 1)
#define rep1(i, a, b) for (__typeof(a) i = a; i < b; i += 1)
#define REPITER(it, a) for (__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define faltu                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vin(v, n)    \
    vector<ll> v(n); \
    rep(i, n) { cin >> v[i]; }
#define vinc(v, n)    \
    vector<int> v(n); \
    rep(i, n) { cin >> v[i]; }
#define vvin(v, n, m)      \
    vector<vector<int> > v; \
    rep(i, n)              \
    {                      \
        rep(j, m)          \
        {                  \
            int a;         \
            cin >> a;      \
            v[i].pb(a);    \
        }                  \
    }
#define vvchar(v, n, m)                         \
    vector<vector<char> > v(n, vector<char>(m)); \
    rep(i, n)                                   \
    {                                           \
        rep(j, m) { cin >> v[i][j]; }           \
    }
#define vin1(v, n, a) vector<ll> v(n, a);
#define vout(v)           \
    rep(i, v.size())      \
    {                     \
        cout << v[i] << ; \
        cout << endl;
//# define swap1(a,b,c) (c t;t=a;a=b;b=t;)
using namespace std;

bool isTrue(vector<vector<char> > v, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] != 'W' && v[i][j] != 'B' && v[i][j]!='G')
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{

    int n, m;
    cin >> n >> m;

    vvchar(v1, n, m);
    if (isTrue(v1, n, m))
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
    return 0;
}