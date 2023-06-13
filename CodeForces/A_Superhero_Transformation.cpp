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
#define double long double
#define pb push_back
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
void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/
int ok(char x)
{
    if(x=='u' || x=='e' || x=='o' || x=='a' || x=='i') 
        return 1;
    return 0;
}
void solve()
{
    string s,t; cin>>s>>t;
    if(s.sz==t.sz)
    {
        int n = s.sz;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                if((ok(s[i]) && !ok(t[i])) || (!ok(s[i]) && ok(t[i])))
                {
                    no nl;
                    return;
                }
            }
        }
        yes nl;
    }
    else no nl;
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
