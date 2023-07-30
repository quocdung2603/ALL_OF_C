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
    int n; cin>>n;
    vector<int> a(n),b(n);
    vector<pair<int,int>> ans;
    vector<pair<int,int>> bns;
    int mx= - INF, pmx, mn=INF , pmn;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] > mx)
        {
            mx=a[i];
            pmx = i;
        }
        if(a[i] < mn)
        {
            mn= a[i];
            pmn=i;
        }
    }
    b=a;
    bool ok=false;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i] > a[i+1])
        {
            while(a[i]>a[i+1])
            {
                ans.pb({i+1,pmn+1});
                if(ans.sz>50)
                {
                    ok=true;
                    break;
                }
                a[i]+=a[pmn];
                if(a[i] < mn)
                {
                    mn=a[i];
                    pmn=i;
                }
            }
            if(ok==true) break;
        }
    }
    ok=false;
    for(int i=1;i<n;i++)
    {
        if(b[i]<b[i-1])
        {
            while(b[i]<b[i-1])
            {
                bns.pb({i+1,pmx+1});
                if(bns.sz>50)
                {
                    ok=true;
                    break;
                }
                b[i]+=b[pmx];
                if(b[i] > mx)
                {
                    mx=b[i];
                    pmx=i;
                }
            }
            if(ok==true) break;
        }
    }
    if(ans.sz < bns.sz) 
    {
        cout<<ans.sz nl;
        fa(x,ans) cout<<x.fi<<" "<<x.se nl;
    }
    else 
    {
        cout<< bns.sz nl;
        fa(x,bns) cout<<x.fi<<" "<<x.se nl;
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
