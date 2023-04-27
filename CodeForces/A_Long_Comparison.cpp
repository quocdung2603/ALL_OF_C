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
    string a,b;
    int n1,n2; cin>>a>>n1>>b>>n2;
    
    if(a.sz+n1 < b.sz+n2) cout<<"<" nl;
    else if(a.sz+n1 > b.sz+n2) cout<<">" nl;
    else 
    {
        while(a.sz<b.sz) a+='0';
        while(b.sz<a.sz) b+='0';
        for(int i=0;i<a.sz;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i] > b[i])
                {
                     cout<<">" nl;
                     return;
                }
                else
                {
                    cout<<"<" nl;
                    return;
                }
            }
        }
        cout<<"=" nl;
    }
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