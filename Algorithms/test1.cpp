#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vi vector<int>
#define vec(type,name, sl) vector<type>name(sl)
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define double long double
#define pb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
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

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int n,m,st,en;
vector<int> vis(minN);
vector<int> a [minN];
vector<int> parent(minN);

void dfs(int u)
{
    vis[u]=true;
    for(auto v: a[u]) {
        if(!vis[v]) {
            parent[v]=u;
            dfs(v);
        }
    }
}
void solve()
{
    cin>>n>>m>>st>>en;
    for(int i=0;i<m;i++) {
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(st);
    if(!vis[en]) {
        cout<<"khong tim duoc duong di tu "<< st <<" den "<<en;
    } else {
        vector<int> path;
        while(parent[en]!=st) {
            path.push_back(en);
            en=parent[en];
        }
        path.push_back(st);
        reverse(path.begin(), path.end());
        cout<<"Duong di tu " << st << " den " <<en <<": ";
        for(auto x: path) {
            cout<<x<<" ";
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
