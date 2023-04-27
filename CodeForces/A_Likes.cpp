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
void file()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve()
{
    int n;cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x>0) cnt++;
    }
    for(int i=1;i<=cnt;i++) cout<<i<<" ";
	for(int i=cnt-1;i>=2*cnt-n;i--) cout<<i<<" ";
    cout nl;
    for(int i=1;i<=n-cnt;i++) cout<<1<<" "<<0<<" ";
    n=n-(n-cnt)*2;
    for(int i=1;i<=n;i++) cout<<i<<" ";
    cout nl;



    // int n;
    // cin >> n;
    // vi a,b,c,d;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;  cin >> x;
    //     x > 0 ? a.bb(x) : b.bb(x);
    //     d.bb(x);
    // }
    // int cnt = 0;
    // while (cnt < n)
    // {
    //     if (cnt < a.sz && cnt < b.sz)
    //     {
    //         c.bb(a[cnt]);
    //         c.bb(b[cnt]);
    //     }
    //     else if (cnt < a.sz)
    //     {
    //         c.bb(a[cnt]);
    //     }
    //     else if (cnt < b.sz)
    //     {
    //         c.bb(b[cnt]);
    //     }
    //     cnt++;
    // }
    // int s = 0;
    // sort(rall(d));
    // for (int i = 0; i < d.sz; i++)
    // {
    //     if (d[i] > 0)
    //     {
    //         s++;
    //         cout << s << " ";
    //     }
    //     else
    //     {
    //         s--;
    //         cout << s << " ";
    //     }
    // }
    // cout nl;
    // s = 0;
    // for (int i = 0; i < c.sz; i++)
    // {
    //     if (c[i] > 0)
    //     {
    //         s++;
    //         cout << s << " ";
    //     }
    //     else
    //     {
    //         s--;
    //         cout << s << " ";
    //     }
    // }
    // cout nl;
}
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}
