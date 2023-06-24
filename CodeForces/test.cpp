#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vec(type,name) vector<type>name
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define double long double
#define pb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz(x) (int)x.size()
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
//void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

// int kCn(int k, int n)
// {
//     int result=1;
//     for (int i=n, j=1; j<=k; i--, j++) 
//         result=result*i/j;
//     return result;
// }
// int bin_pow(int a,int b,int mod)
// {
//     if(b==0)return 1;
//     int tmp=bin_pow(a,b/2,mod);
//     if((b&1)==false){
//         return (tmp*tmp)%mod;
//     }
//     return (a*(tmp*tmp)%mod)%mod;
// }
vector<bool> vis(100001);
vector<int> a[100001];
set<int>s;
int n,m;
void DFS(int u) 
{
    vis[u]=true;
    s.insert(u);
    for(auto &v:a[u])
    {
        if(!vis[v])
        {
            DFS(v);
        }
    }
}
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int k; cin>>k;
        for(int j=1;j<=k;j++)
        {
            int x; cin>>x;
            a[i].pb(x);
            a[x].pb(i);
        }
    }
    DFS(m);
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<i<<": ";
    //     for(auto &x: a[i])
    //     {
    //         cout<<x<<" ";
    //     }
    //     cout nl;
    // }
    cout<<sz(s) nl;
    fa(x,s) cout<<x<<" ";
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