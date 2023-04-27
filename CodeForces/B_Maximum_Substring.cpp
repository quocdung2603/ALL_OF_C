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
    int n;cin>>n;
    string s;cin>>s;
    s+='?';
    int cnt0=0,cnt1=0,cntk=1,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1]) cntk++;
        else 
        {
            ans=max(ans,cntk*cntk);
            cntk=1;
        }
        if(s[i]=='0') cnt0++;
        else if(s[i]=='1') cnt1++;
    }
    // if(s[n-1]=='1') cnt1++;
    // else cnt0++;
    ans=max(ans,cnt0*cnt1);
    cout<<ans nl;
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