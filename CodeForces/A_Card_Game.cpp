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
    char k[9] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    string s, a, b;
    cin >> s >> a >> b;
    if (a == b)
    {
        no;
    }
    else if (a[1] == s[0] && b[1] != s[0])
    {
        yes;
    }
    else if (a[1] == b[1])
    {
        int c1 = 0, c2 = 0;
        for (int i = 0; i < 9; i++)
        {
            if (k[i] == a[0]) c1=i;
            else if (k[i] == b[0]) c2=i;
        }
        if(c1>c2) yes;
        else no;
    }
    else no;
}
signed main()
{
    fast_in_out();
    int u = 1;
    // cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}