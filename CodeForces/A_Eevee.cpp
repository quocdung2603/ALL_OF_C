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
    string a[8]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    vi check(8);
    int n;cin>>n;
    string s;cin>>s;
    int c=count(all(s),'.');
    if(c==n)
    {
        for(int i=0;i<8;i++)
        {
            if(a[i].sz==c)
            {
                cout<<a[i];
                return;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        string b=a[i];
        // cout<<s.sz<<" "<<b.sz<<" "<<b nl;
        cnt=0;
        if(b.sz==s.sz)
        {
            // cout<<b<<" ";
            for(int i=0;i<b.sz;i++)
                if(b[i]==s[i]) cnt++;
        }
        // cout<<cnt<<" ";
        check[i]=cnt;
    }
    int mx=-INF,ans=-1;
    for(int i=0;i<8;i++)
    {
        // cout<<check[i]<<" ";
        if(check[i] > mx)
        {
            mx = check[i];
            ans=i;
        }
    }
    cout<<a[ans];
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