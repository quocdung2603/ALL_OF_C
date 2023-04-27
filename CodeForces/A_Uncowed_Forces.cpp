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
    vector<pair<int ,int >> a(5);
    for(int i=0;i<5;i++) cin>>a[i].fi;
    for(int i=0;i<5;i++) cin>>a[i].se;
    int hs ,hu; cin>>hs>>hu;
    int total=0, point =500;
    for(int i=0;i<5;i++)
    {
        total+=max(3*point/10 , point-a[i].fi*(point/250) - 50*a[i].se);
        point+=500;
    }
    total+=hs*100;
    total-=hu*50;
    cout<<total; 
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