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

int to_int(string &x)
{   
    int s=0;
    for(int i=0;i<x.sz;i++) s=s*10 + (x[i]-48);
    return s;
}
void solve()
{
    string x,y,tmp1="",tmp2=""; cin>>x>>y;
    int h1,m1,h2,m2;
    bool ok=false;
    for(int i=0;i<x.sz;i++)
    {
        // cout<<x[i];
        if(x[i]==':')
        {
            ok=true;
            continue;
        }
        if(ok==false) tmp1+=x[i];
        else tmp2+=x[i];
    }
    // cout<<tmp1<<" "<<tmp2 nl;
    h1=to_int(tmp1);
    m1=to_int(tmp2);
    tmp1=tmp2="";
    ok=false;
    for(int i=0;i<y.sz;i++)
    {
        // cout<<x[i];
        if(y[i]==':')
        {
            ok=true;
            continue;
        }
        if(ok==false) tmp1+=y[i];
        else tmp2+=y[i];
    }
    h2=to_int(tmp1);
    m2=to_int(tmp2);
    // cout<<h2<<" "<<m2;
    int k= abs((h1*60+m1) - (h2*60+m2));
    k/=2;
    while(k>0)
    {
        m1++;
        if(m1==60) 
        {
            m1=0;
            h1++;
            if(h1==24) h1=0;
        }
        k--;
    }
    if(h1<10) cout<<"0"<<h1<<":";
    else cout<<h1<<":";
    if(m1<10) cout<<"0"<<m1;
    else cout<<m1;
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
