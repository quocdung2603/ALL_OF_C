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
/*
    5 : 2 
    6 : 2
    7 : 
    1 2 3 4 5 6 7
    3 1 4 2 6 5 7

*/
void solve()
{
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    if(n%2==0)
    {
        cout<<n/2-1 nl;
        for(int i=0;i<n;i++) 
        {
            cout<<a[i+1]<<" "<<a[i]<<" ";
            i++;
        }
    }
    else 
    {
        cout<<n/2 nl;
        for(int i=0;i<n-1;i++) 
        {
            cout<<a[i+1]<<" "<<a[i]<<" ";
            i++;
        }
        cout<<a[n-1];
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
