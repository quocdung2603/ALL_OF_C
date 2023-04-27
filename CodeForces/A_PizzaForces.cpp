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
    int n,x;cin>>n;
    if(n<=6)
    {
        cout<<15 nl;
    }
    else 
    {
        x=n;
        n++;
        if(n%6==0 || n%8==0 || n%10==0)
        {
            if(n%6==0) cout<<15*(n/6) nl;
            else if(n%8==0) cout<<20*(n/8) nl;
            else if(n%10==0) cout<<25*(n/10) nl;
        } 
        else 
        {
            n--;
            while(x%6!=0 && x%8!=0 && x%10!=0) x++;
            int t=abs(n-x);
            if(x%6==0) cout<<15*(x/6) - t/2*5 nl;
            else if(x%8==0) cout<<20*(x/8) - t/2*5 nl;
            else if(x%10==0) cout<<25*(x/10) - t/2*5 nl;
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