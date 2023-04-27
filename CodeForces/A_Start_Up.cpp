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
    string s;cin>>s;
    string t=s;
    reverse(all(t));
    if(t!=s)
    {
        no;
        return;
    }
    for(int i=0;i<s.sz;i++)
    {
        if(s[i]!='A' && s[i]!='H' && s[i]!='I' && s[i]!='M' && s[i]!='O' && s[i]!='T' && s[i]!='U' && s[i]!='V' && s[i]!='W' && s[i]!='X' && s[i]!='Y')
        {
            no;
            return;
        }
    } 
    yes;
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