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
    int n,m;cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<n;i++)
    {
        string a,b;cin>>a>>b;
        mp[b]=a;
    }
    // for(auto x: mp) cout<<x.fi<<" "<<x.se nl;
    for(int i=0;i<m;i++)
    {
        string a,b;cin>>a>>b;
        b.erase(b.sz-1,1);
        for(auto x : mp)
        {
            if(x.fi  == b) 
            {
                cout<<a<<" "<<b<<"; #"<<x.se nl;
            }
        }
    }
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