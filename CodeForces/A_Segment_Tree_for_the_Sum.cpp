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
int a[maxN];
int st[4*maxN];
void build(int id, int l, int r)
{
    if(l==r)
    {
        st[id]=a[l];
        return;
    }
    int m =(l+r)/2;
    build(id*2,l,m);
    build(id*2+1,m+1,r);
    st[id]=st[id*2]+st[id*2+1];
}
void update(int id,int l,int r, int i,int v)
{
    if(l==r)
    {
        st[id]=v;
        return;
    }
    int m=(l+r)/2;
    if(i<=m)
    {
        update(id*2,l,m,i,v);
    }
    else 
    {
        update(id*2+1,m+1,r,i,v);
    }
    st[id]=st[id*2]+st[id*2+1];
}
int get(int id,int l,int r, int L,int R)
{
    if(l>R || r<L)
    {
        return 0;
    }
    if(l>=L && r<=R)
    {
        return st[id];
    }
    int m = (l+r)/2;
    int left= get(id*2,l,m,L,R);
    int right= get(id*2+1,m+1,r,L,R);
    return left + right;
}
void solve()
{
    int n,q; cin>>n>>q;
    for(int i=0;i<n;i++) cin>>a[i];
    build(1,0,n-1);
    while(q--)
    {
        int op; cin>>op;
        if(op==1)
        {
            int i,v; cin>>i>>v;
            update(1,0,n-1,i,v);
        }
        else
        {
            int l,r; cin>>l>>r;
            int ans = get(1,0,n-1,l,r-1);
            cout<<ans nl;
        }
    }
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
