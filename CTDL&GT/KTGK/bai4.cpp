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
    string s;
    int n;
    char x;
    cin>>s>>n;
    fflush(stdin);
    cin.ignore();
    cin>>x;
    bool c1=false,c2=false , c3=false;
    if(s.sz==4 && s[0]!='0') c1=true;
    if(n>=0 && n<=10) c2=true;
    if(x=='M' || x=='F' || x=='N') c3=true;
    if(c1==true && c2==true && c3==true)
        cout<<s nl<<n nl<<x nl;
    else   
        return;
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