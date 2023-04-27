#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vd vector<double>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vtr vector<string>
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define ld long double
#define bb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
#define wh while
#define fon(i, l, r) for (int i = l; i <= r; i++)
#define fod(i, r, l) for (int i = r; i >= l; i--)
#define fa(x, a) for (auto &x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
// tt
void solve()
{
    int n,x,sa=0,sb=0,pen=0;cin>>n>>x;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>b[i];
    //     pen+=b[i];
    //     sa=sa+max(0LL,a[i]-pen*x);
    // }
    // pen=0;
    // for(int i=n-1;i>=0;i--)
    // {
    //     pen+=b[i];
    //     sb=sb+max(0ll,a[i]-pen*x);
    // }
    // //cout<<sa<<" "<<sb;
    int penb=0;
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++)
    {
        pen+=b[i];
        penb+=b[n-1-i];
        sa=sa+max(0ll,a[i]-pen*x);
        sb=sb+max(0ll,a[n-1-i]-penb*x);
    }
    // cout<<sa<<" "<<sb;
    if(sa>sb) cout<<"Limak";
    else if(sa<sb) cout<<"Radewoosh";
    else cout<<"Tie";

}
signed main()
{
    fast_in_out();
    int u = 1;
    //cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}