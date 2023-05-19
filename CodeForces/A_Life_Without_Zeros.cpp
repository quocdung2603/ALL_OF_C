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
string add2(string &s1 , string &s2)
{
    stack<char> a,b,ans;
    for(int i=0;i<s1.sz;i++) a.push(s1[i]);
    for(int i=0;i<s2.sz;i++) b.push(s2[i]);
    bool ok = false;
    int x =(a.top()-48), y = (b.top()-48);
    a.pop(); b.pop();
    if(x+y>=10)
    {
        ok=true; ans.push(char((x+y-10)+48));
    }
    else ans.push(char((x+y)+48));
    while(!a.empty() && !b.empty())
    {
        int z = (a.top()-48) + (b.top()-48);
        if(z >=10)
        {
            z-=10;
            if(ok==true)
            {
                z++;
                ans.push(char(z+48)); 
                ok=true;
            }
            else
            {
                ans.push(char(z+48));
                ok=true;
            }
            
            a.pop(); b.pop();
        }
        else 
        {
            if(ok==true)
            {
                z++;
                if(z>=10)
                {
                    z-=10;
                    ans.push(char(z+48));
                    ok=false;
                }
                else
                {
                    ans.push(char(z+48));
                    ok=false;
                }
            }
            else
            {
                ans.push(char(z+48));
                ok=false;
            }
            a.pop(); b.pop();
        }
    }
    while(!a.empty())
    {
        ans.push(a.top());
        a.pop();
    }
    while(!b.empty())
    {
        ans.push(b.top());
        b.pop();
    }
    string s="";
    while(!ans.empty())
    {
        s += ans.top();
        ans.pop();
    }
    if(s[0]=='0') s='1'+s;
    return s;
}
void solve()
{
    string s1,s2,x="",y="",z="",ans1,ans2; cin>>s1>>s2;
    ans1 = add2(s1,s2);
    for(int i=0;i<s1.sz;i++)
        if(s1[i]!='0') x+=s1[i];
    for(int i=0;i<s2.sz;i++)
        if(s2[i]!='0') y+=s2[i];
    for(int i=0;i<ans1.sz;i++)
        if(ans1[i]!='0') z+=ans1[i];
    ans2=add2(x,y);
    if(ans2==z) yes nl;
    else no nl;
    // cout<<ans1 <<" " << ans2;

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
