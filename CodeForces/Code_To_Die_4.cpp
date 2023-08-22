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
void solveA()
{
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].fi>>a[i].se;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            if((a[i].fi+a[i].se == a[j].fi) && (a[j].fi+a[j].se == a[i].fi)) 
            {
                yes nl;
                return;
            }
        }
    }
    no nl;
}
void solveB()
{
    int a,b,c,d; cin>>a>>b>>c>>d;
    if((a== c && c==d)  || a==d && a>0) cout<<1;
    else cout<<0;
}
void solveC()
{
    int n; cin>>n;
    string s,t; cin>>s>>t;
    if(s==t) cout<<0 nl;
    else 
    {
        int ans1=0,ans2=0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==t[i]) cnt1++;
            if(s[i]==t[n-i-1]) cnt2++;
        }
        ans1=n-cnt1;
        ans1*=2;
        if(ans1/2%2==1) ans1--; 
        if(ans1<0)  ans1=0;
        //cout<<ans1 nl;

        ans2=n-cnt2;
        ans2*=2;
        if(ans2/2%2==0) ans2--;
        if(ans2<2) ans2=2;
        //cout<<ans2 nl;
        cout<<max(0LL,min(ans1,ans2)) nl;
    }
}
void solveD()
{
    int n,mx=-INF,ans=0; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        if(mx==i+1) ans++;
    }
    cout<<ans nl;
}
// void solveE()
// {
    
// }
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        solveD();
    }
    return 0;
}
