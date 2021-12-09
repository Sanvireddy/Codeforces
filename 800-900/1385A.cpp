#include <bits/stdc++.h>
#define ll long long
#define inf 1000000007
#define inf1 1000000007
#define inf2 163577857
#define pb push_back
#define mp make_pair
#define rep(i, a) for(__typeof(a) i = 0;i < a;i += 1)
#define rep1(i, a, b) for(__typeof(a) i = a;i < b;i += 1)
#define REPITER(it, a) for(__typeof(a.begin()) it = a.begin();it != a.end(); ++it)
#define faltu ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vin(v,n) vector<ll> v(n); rep(i,n){cin>>v[i];}
#define vinc(v,n) vector<int> v(n); rep(i,n){cin>>v[i];}
#define vin1(v,n,a) vector<ll> v(n,a);
#define vout(v) rep(i,v.size()){cout<<v[i]<<;cout<<endl;
//# define swap1(a,b,c) (c t;t=a;a=b;b=t;)
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y)
        {
            if(y==z) {cout<<"YES"<<endl;cout<<x<<" "<<y<<" "<<z<<endl;}
            else
            {
                if(x>z)
                {
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<z<<" "<<z<<endl;
                }else cout<<"NO"<<endl;
            }
        }else
        {
            if(y==z)
            {
                if(y>x)
                {
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<x<<endl;
                }else cout<<"NO"<<endl;
            }
            else if(x==z)
            {
                if(x>y)
                {
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<y<<endl;
                }else cout<<"NO"<<endl;
            }else cout<<"NO"<<endl;
        }
    }
    return 0;
}