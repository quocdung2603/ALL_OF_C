#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vi vector<int>
#define vec(type,name, sl) vector<type>name(sl)
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define double long double
#define pb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
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
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int st=0,en=n-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            st=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='B')
        {
            en=i;
            break;
        }
    }
    cout<<abs(en-st)+1 nl;
    
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
