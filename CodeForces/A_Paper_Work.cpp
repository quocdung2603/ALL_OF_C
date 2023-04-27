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
#define fa(x, a) for (auto x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
void solve()
{
    int n;cin>>n;
    vi a(n+1);
    int z=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<0) z++;
    }
    // if(z<3)
    // {
    //     cout<<1 nl;
    // }
    int cnt=0,k=1;
    vi b;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<0) cnt++; 
        if(cnt==3)
        {
            // cout<<i<<" "<<k nl;
            cnt=1;
            b.bb(i-k);
            k=i;  
        }
    }
    if(n-k+1!=0) b.bb(n-k+1);
    cout<<b.sz nl;
    for(int i=0;i<b.sz;i++) cout<<b[i]<<" ";
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