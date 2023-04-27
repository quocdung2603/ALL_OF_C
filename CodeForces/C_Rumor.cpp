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
// tt
vector<int> adj[minN];
bool vis [minN];
vector<int>a;
int n,m;

int dfs(int u)
{
    vis[u]=true;
    int mn=a[u-1];
    fa(v,adj[u])
    {
        if(!vis[v]) 
            mn=min({mn,a[v-1],dfs(v)});
    }
    return mn;
}
void solve()
{
    cin>>n>>m;
    int s=0;
    fon(i,0,n-1)
    {
        int z;cin>>z;
        s+=z;
        a.bb(z);
    }
    fon(i,0,m-1)
    {
        int x,y;cin>>x>>y;
        adj[x].bb(y);
        adj[y].bb(x);
    }
    if(m==0) 
    {
        cout<<s;
        return;
    }
    s=0;
    fon(i,1,n) 
        if(!vis[i]) s+=dfs(i);
    cout<<s;
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