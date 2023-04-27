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
    vi a(n),q(n+1),p(n+1), c1(n) , c2(n);
    int k=0;
    set<int> s1,s2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        q[i+1]=-1;
        p[i+1]=-1;
        c1[i]=0;
        c2[i]=0;
    }   
    for(int i=0;i<n;i++)
    {
        if(q[a[i]]==-1)
        {
            q[a[i]]=1;
            c1[i]=a[i];
        }
        else if(p[a[i]]==-1)
        {
            p[a[i]]=1;
            c2[i]=a[i];
        }
        else k=1;
    }
    if(k==1)
    {
        no nl;
        return;
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