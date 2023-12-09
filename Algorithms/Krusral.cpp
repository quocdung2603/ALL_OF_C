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
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

int parent[100001], size[100001];
void Make_set(int n) {
	for (int i=0; i<n; i++) {
		parent[i]=i;
		size[i]=1;
	}
}
int Find(int u) {
	if (u==parent[u]) return u;
	return parent[u]=Find(parent[u]);
}
void Union(int u, int v) {
	u=Find(u); v=Find(v);
	if (u!=v) {
		if (size[u]<size[v]) swap(u, v);
		parent[v]=u;
		size[u]+=size[v];
	}
}
void solve() { 
    // tìm cây khung nhỏ nhất
    int n, m; cin >> n >> m;
    Make_set(n);
    vector <pair<int, pair<int, int>>> t(m);
    for (int i=0; i<m; i++) {
        cin >> t[i].second.first >> t[i].second.second >> t[i].first;
    }
    sort(all(t));
    for (int i=0; i<m; i++) {
        int u=Find(t[i].second.first), v=Find(t[i].second.second);
        if (u!=v) {
            cout << t[i].second.first << " " << t[i].second.second nl;
            Union(t[i].second.first, t[i].second.second);
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
