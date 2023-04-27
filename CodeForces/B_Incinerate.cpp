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
    int n,k;cin>>n>>k;
    vii c(n);
    vi a(n);
    vi b(n);
    for(int i=0;i<n;i++) cin>>c[i].fi;
    for(int i=0;i<n;i++) cin>>c[i].se;
    sort(all(c));
    for(int i=0;i<n;i++)
    {
        a[i]=c[i].fi;
        b[i]=c[i].se;
    }
    vi Min(n);
    Min[n-1]=b[n-1];
    for(int i=n-2;i>=0;i--) Min[i]= min(b[i],Min[i+1]);
    int prev=0,ans=k;
    while(true)
    {
        int pos = upper_bound(a.begin()+prev,a.end(),ans) - a.begin();
        if(pos==n)
        {
            yes nl;
            return;
        }
        prev=pos;
        ans = ans+ k-Min[pos]; // thay vì cho a[i]-k , thì cho y nhận xác thương khi quái vật dánh lại mình, sát thương bằng dúng Min[pos]
        k-=Min[pos];
        if(k<=0)
        {
            no nl;
            return;
        }
    }

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