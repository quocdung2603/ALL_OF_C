#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vd vector<double>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vtr vector<string>
#define yes cout << "yes"
#define no cout << "no"
#define int long long
#define double long double
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
void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

void solve()
{
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // a.bb(0);
    if(is_sorted(a.begin(), a.end()))
    {
        yes nl;
        cout<<1<<" "<<1 nl;
        return;
    }
    int l=0,r=0,ok=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i] > a[i+1]) 
        {
            if(ok==0)
            {
                l=i;
                r=i+1;
                ok=1;
            }
            else 
            {
                ok=1;
                r=i+1;
            }
        }
    }
    // cout<<l<<" "<<r nl;
    reverse(a.begin()+l , a.begin()+r+1);
    if(is_sorted(all(a)))
        yes nl << l+1<<" "<<r+1 nl;
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
