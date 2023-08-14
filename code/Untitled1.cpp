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
//void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

// int kCn(int k, int n)
// {
//     int result=1;
//     for (int i=n, j=1; j<=k; i--, j++) 
//         result=result*i/j;
//     return result;
// }
// int bin_pow(int a,int b,int mod)
// {
//     if(b==0)return 1;
//     int tmp=bin_pow(a,b/2,mod);
//     if((b&1)==false){
//         return (tmp*tmp)%mod;
//     }
//     return (a*(tmp*tmp)%mod)%mod;
// }
int check(int n)    
{
    if(n>=1 && n<=9) return n;
    else if(n>=10 && n<99) return n/10;
    else if(n>=100 && n<999) return n/100;
    else if(n>=1000 && n<9999) return n/1000;
    else if(n>=10000 && n<99999) return n/10000;
    else if(n>=100000 && n<999999) return n/100000;
    else if(n>=1000000 && n<9999999) return n/1000000;
    else if(n>=10000000 && n<99999999) return n/10000000;
    else if(n>=100000000 && n<999999999) return n/100000000;
    else return n/1000000000;
}
void solve()
{
    int n; cin>>n;
    vector<int> mot,hai,ba,bon,nam,sau,bay,tam,chin;
    vector<vector<int>> a(10);
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        string k = to_string(x);
        a[(k[0]-'0')].pb(x);
        // int k = check(x);
        // if(k==9) chin.pb(x);
        // else if(k==8) tam.pb(x);
        // else if(k==7) bay.pb(x);
        // else if(k==6) sau.pb(x);
        // else if(k==5) nam.pb(x);
        // else if(k==4) bon.pb(x);
        // else if(k==3) ba.pb(x);
        // else if(k==2) hai.pb(x);
        // else mot.pb(x);
    }
    for(int i=9;i>=1;i--)
    {
        vector<int> sz1,sz2,sz3,sz4,sz5,sz6,sz7,sz8,sz9;
        for(int j=0;j<a[i].sz;j++)
        {
            string tmp = to_string(a[i][j]);
            if(tmp.sz==1) sz1.pb(a[i][j]);
            else if(tmp.sz==2) sz2.pb(a[i][j]);
            else if(tmp.sz==3) sz3.pb(a[i][j]);
            else if(tmp.sz==4) sz4.pb(a[i][j]);
            else if(tmp.sz==5) sz5.pb(a[i][j]);
            else if(tmp.sz==6) sz6.pb(a[i][j]);
            else if(tmp.sz==7) sz7.pb(a[i][j]);
            else if(tmp.sz==8) sz8.pb(a[i][j]);
            else if(tmp.sz==9) sz9.pb(a[i][j]);
        }
        sort(rall(sz1));
        sort(rall(sz2));
        sort(rall(sz3));
        sort(rall(sz4));
        sort(rall(sz5));
        sort(rall(sz6));
        sort(rall(sz7));
        sort(rall(sz8));
        sort(rall(sz9));
        fa(x,sz9) cout<<x;
        fa(x,sz8) cout<<x;
        fa(x,sz7) cout<<x;
        fa(x,sz6) cout<<x;
        fa(x,sz5) cout<<x;
        fa(x,sz4) cout<<x;
        fa(x,sz3) cout<<x;
        fa(x,sz2) cout<<x;
        fa(x,sz1) cout<<x; 
    }
}
void solve1()
{
    int n; cin>>n;
    vector<vector<int>> a(10);
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        string k = to_string(x);
        a[(k[0]-'0')].pb(x);
    }
    string ans="";
    for(int i=9;i>=1;i--)
    {
        string k=(i-'0');
        for(int j=0;j<a[i].sz;j++)
        {
            string k1 = to_string(a[i][j]);
            k1.substr(0,)
        }
        if(ans+k>=k+ans) ans+=k;
        else k+=ans;
    }
    //cout<<ans;
}
signed main()
{
    fast_in_out();
    int u = 1;
    //cin >> u;
    while (u--)
    {
        solve1();
    }
    return 0;
}