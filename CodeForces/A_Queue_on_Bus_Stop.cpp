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
    vi a(n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c+=a[i];
    }
    if(c<=m)
    {
        cout<<1;
        return;
    }
    int cnt=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==m) cnt++;
        else if(i==n-1) cnt++;
        else 
        {
            int k=i-1;
            s=0;
            while(s<m && k<n)
            {
                k++;
                s+=a[k];
            }
            if(s==m)
            {
                cnt++;
                i=k;
            }
            else 
            {
                cnt++;
                i=k-1;
            }
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