#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vec(type,name) vector<type>name
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
void solve()
{
    string a,b,c; cin>>a>>b>>c;
    char x='.';
    for(int i=0;i<3;i++)
    {
        if(a[i]==b[i] && a[i]==c[i] && a[i]!='.')
        {
            x=a[i];
        }
    }
    if(a[0]==a[1] && a[0]==a[2] && a[0]!='.') x=a[0];
    if(b[0]==b[1] && b[0]==b[2] && b[0]!='.') x=b[0];
    if(c[0]==c[1] && c[0]==c[2] && c[0]!='.') x=c[0];
    if(a[0]==b[1] && a[0]==c[2] && a[0]!='.') x=a[0];
    if(c[0]==b[1] && c[0]==a[2] && c[0]!='.') x=c[0];
    if(x=='.') cout<<"DRAW" nl;
    else cout<<x nl;
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
