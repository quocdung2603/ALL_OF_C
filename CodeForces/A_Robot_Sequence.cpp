#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vd vector<double>
#define vt(type) vector<type>
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

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0;
    for(int i=0;i<s.sz;i++)
    {
        string z="";
        z+=s[i];
        for(int j=i+1;j<s.sz;j++)
        {
            z+=s[j];
            int k=0,x=0,y=0;
            while(k < z.sz)
            {
                if(z[k]=='U') x--;
                else if(z[k]=='D') x++;
                else if(z[k]=='R') y++;
                else y--;
                k++;
            }
            if(x==0 && y==0) cnt++;
        }
    }
    cout<<cnt;
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
