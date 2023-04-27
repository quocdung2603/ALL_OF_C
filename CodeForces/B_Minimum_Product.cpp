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
    int a,b,x,y,n;cin>>a>>b>>x>>y>>n;   
    if(a > b) 
    {
        swap(a,b);
        swap(x,y);
    }
    if(n>=a-x+b-y)  
        cout<<x*y;
    else
    {
        if(a-n>=x && b-n>=y) cout<<(a-n)*b;
        else 
        {
            int ans1=(a-(a-x))*(b-(n-(a-x)));
            int ans2=(b-(b-y))*(a-(n-(b-y)));
            if(a-n >=x)
                ans1 = (a-n)*b;
            if(b-n>=y)
                ans2=(b-n)*a;
            cout<<min(ans1,ans2);
            // cout<<ans2<<" "<<ans1;
        }
    }
    cout nl;
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