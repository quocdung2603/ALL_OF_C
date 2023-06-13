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
void file()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

void solve()
{
    int n, s;
    cin >> n >> s;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l=0,cnt=0,ss=0;
    for(int i=0;i<n;i++)
    {
        ss+=a[i];
        while(ss>s)
        {
            ss-=a[l];
            l++;
        }
        cnt+=(i-l+1);
    }
    cout<<cnt;
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
