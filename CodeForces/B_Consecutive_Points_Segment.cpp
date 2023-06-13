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
int ok[200001] = {0};
void solve()
{
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=1;i<n;i++)
    {
        int k =a[i]-a[i-1];
        if(k==1) cnt1++;
        else if(k==2) cnt2++;
        else if(k==3) cnt3++;
        else 
        {
            no nl;
            return;
        }
    }
    if(cnt2>2 || cnt3>=2 || cnt2>0 && cnt3>0) no nl;
    else yes nl;
}
signed main()
{
    fast_in_out();
    int u = 1;
    cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}
