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
#define vin1(v, n, a) vector<ll> v(n, a);
#define vout(v)           \
    rep(i, v.size())      \
    {                     \
        cout << v[i] << ; \
        cout << endl;
//# define swap1(a,b,c) (c t;t=a;a=b;b=t;)
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<ll int> v;

    for (int i = 1; i <= 9; i++)
    {
        string k = to_string(i);
        string ele = k;
        while (stol(ele) < inf)
        {
            v.pb(stol(ele));
            ele = k + ele;
        }
    }

    while (t--)
    {
        ll int a;
        cin >> a;
        cout << v[a] << endl;
    }
    return 0;
}