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
    int n,m,z; cin>>n>>m>>z;
    vector<vector<int>> a(n+1,vector<int>(m+1));
    int k=1;
    for(int i=1;i<=z*2;i++)
    {
        int x,y; cin>>x>>y;
        if(i%2!=0) k=1;
        else k=2;
        if(a[x][y]==0)  a[x][y]=k;
        else if(a[x][y]!=k) a[x][y]=0;
        if(x+1<=n)
        {
            if(a[x+1][y]==0)  a[x+1][y]=k;
            else if(a[x+1][y]!=k) a[x+1][y]=0;
        }
        if(x-1>=1)
        {
            if(a[x-1][y]==0)  a[x-1][y]=k;
            else if(a[x-1][y]!=k) a[x-1][y]=0;
        }
        if(y+1<=m)
        {
            if(a[x][y+1]==0)  a[x][y+1]=k;
            else if(a[x][y+1]!=k) a[x][y+1]=0;
        }
        if(y-1>=1)
        {
            if(a[x][y-1]==0)  a[x][y-1]=k;
            else if(a[x][y-1]!=k) a[x][y-1]=0;
        }
        if(x-1>=1 && y-1>=1)
        {
            if(a[x-1][y-1]==0)  a[x-1][y-1]=k;
            else if(a[x-1][y-1]!=k) a[x-1][y-1]=0;
        }
        if(x+1<=n && y+1<=m)
        {
            if(a[x+1][y+1]==0)  a[x+1][y+1]=k;
            else if(a[x+1][y+1]!=k) a[x+1][y+1]=0;
        }
        if(x-1>=1 && y+1<=m)
        {
            if(a[x-1][y+1]==0)  a[x-1][y+1]=k;
            else if(a[x-1][y+1]!=k) a[x-1][y+1]=0;
        }
        if(x+1<=n && y-1>=1)    
        {
            if(a[x+1][y-1]==0)  a[x+1][y-1]=k;
            else if(a[x+1][y-1]!=k) a[x+1][y-1]=0;
        }
    }
    int r=0,b=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==1) r++;
            else if(a[i][j]==2) b++;
            //cout<<a[i][j]<<" ";
        }
        //cout nl;
    }
    cout<<r<<" "<<b;
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
