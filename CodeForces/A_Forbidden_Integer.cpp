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
    int n,k,x; cin>>n>>k>>x;    
    if(x!=1)
    {
        yes nl;
        cout<< n nl;
        for(int i=0;i<n;i++) cout<<1<<" ";
        cout nl;
    }
    else 
    {
        if(k==1) no nl;
        else if(n%k==0) 
        {
            yes nl << n/k nl;
            for(int i=0;i<n/k;i++) cout<<k<<" ";
            cout nl;
        }
        else if(n%2==0 && k>=2) 
        {
            yes nl << n/2 nl;
            for(int i=0;i<n/2;i++) cout<<2<<" ";
        }
        else if(n>=3 && k>=3)
        {
            yes nl << n/2 nl;
            for(;n>3;n-=2)
            {
                cout<<2<<" ";
            }
            cout<<n nl;
        }
        else no nl;
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
