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
int checksnt(int n)
{
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(int i=5;i<=sqrt(n);i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
            return 0;
    }
    return 1;
}
void solve()
{
    int n;cin>>n;
    int s=0;
    vi a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(checksnt(s)==0)
    {
        cout<<n nl;
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
        cout nl;
    }
    else 
    {
        int f=0;
        cout<<n-1 nl;
        for(int i=1;i<=n;i++)
        {
            if(a[i]%2!=0 && f==0)
            {
                f++;
                continue;
            }
            cout<<i<<" ";
        }
        cout nl;
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