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

void solve()
{
    int n; cin>>n;
    char a[n][n];
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            // mp[a[i][j]]++;
        }
    }
    char x=a[0][0], y=a[0][1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i==n-1-j)
            {
                if(a[i][j]==x) mp[x]++;
            }
            else 
            {
                if(a[i][j]==y) mp[y]++;
            }
        }
    }
    // cout<<n*n - mp[y];
    if(mp[x] + mp[y]==n*n) yes nl;
    else no nl;
    /*
        s=n*n;
        mp[y]= n*n - n*2-1 - mp[y] == 0
        9 - 3*2-1 - 4
    */
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
