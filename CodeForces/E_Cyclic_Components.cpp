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
int n,m;
vector<int> a[200001];
vector<int> b;
bool vis[200001];
int counts[200001];

void dfs(int u)
{
    vis[u]=true;
    b.bb(u);
    for(auto x: a[u])
    {
        if(!vis[x]) 
            dfs(x);
    }
}
void solve()
{
    cin>>n>>m;
    memset(vis , false , sizeof(vis));
    for(int i=1;i<=m;i++)
    {
        int x,y;cin>>x>>y;
        a[x].bb(y);
        a[y].bb(x);
        counts[x]++;
        counts[y]++;
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            b.clear();
            dfs(i);
            bool check=true;
            for(auto v: b)
            {
                if(counts[v]!=2) check=false;
            }
            if(check) cnt++;
        }
    }   
    cout <<cnt;  
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