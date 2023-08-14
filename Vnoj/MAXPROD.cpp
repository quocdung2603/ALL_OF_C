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
void solve()
{
    int n,k; cin>>n>>k;                     
    vector<pair<int,int>> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i].fi>>a[i].se;
        b[i].fi = a[i].se;
        b[i].se = a[i].fi;
    }
    sort(rall(a));
    sort(rall(b));
    int s1=0,s2=0,s3=0,s4=0;
    s1+=(a[0].fi+(k+1)/2) * (a[0].se + k/2);
    s2+=(a[0].fi+k/2) * (a[0].se + (k+1)/2);
    s3+=(b[0].fi+(k+1)/2) * (b[0].se + k/2);
    s4+=(b[0].fi+k/2) * (b[0].se + (k+1/2));
    for(int i=1;i<n;i++)
    {
        s1+=(a[i].fi*a[i].se);
        s2+=(a[i].fi*a[i].se);
        s3+=(b[i].fi*b[i].se);
        s4+=(b[i].fi*b[i].se);
    }
    cout<<max(s1,max(s2,max(s3,s4)));
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
