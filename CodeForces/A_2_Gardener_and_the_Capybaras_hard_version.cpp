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
    string s;cin>>s;
    string t="";
    t+=s[0];
    t+=s[1];
    if(t=="bb"  || t=="aa" || t=="ba")
    {
        cout<<s[0]<<" "<<s[1]<<" ";
        for(int i=2;i<s.sz;i++) cout<<s[i];
    }
    else if(t=="ab")
    {
        int k=-1;
        for(int i=2;i<s.sz;i++)
        {
            if(s[i]!='b')
            {
                k=i;
                break;
            }
        }
        if(k==-1)
        {
            for(int i=0;i<s.sz-2;i++) 
                cout<<s[i];
            cout<<" "<<s[s.sz-2]<<" " << s[s.sz-1];
        }
        else
        {
            cout<<s[0]<<" ";
            for(int i=1;i<k;i++) cout<<s[i];
            cout<<" ";
            for(int i=k ;i<s.sz;i++) cout<<s[i];
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