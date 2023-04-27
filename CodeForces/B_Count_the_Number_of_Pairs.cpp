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
void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

void solve()
{
    int n,k;cin>>n>>k;
    map<char,int> mp, Mp;
    string s;cin>>s;
    for(int i=0;i<s.sz;i++)
    {
        if(s[i]>='a' && s[i]<='z') mp[s[i]]++;
        else Mp[char(s[i]+32)]++;
    }
    int ans=0,z=0;
    for(char i='a' ; i<='z';i++)
    {
        ans+=(max(mp[i],Mp[i]) - min(mp[i],Mp[i]))/2;
        z += min(mp[i],Mp[i]);
    }
    cout<<z+ min(ans,k) nl;
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
