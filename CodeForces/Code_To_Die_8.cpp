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
    int n,k,d; cin>>n>>k>>d;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mn = INF;
    for(int i=0;i<n-d+1;i++)
    {
        map<int,int> mp;
        int j=i;
        while(j<n)
        {
            mp[a[j]]++;
            if(j-i+1==d)
            {
                mn= min((int)mp.sz, mn);
                mp.clear();
            }
            j++;
        }
    }
    cout<<mn nl;
}
void solveB()
{
    int n; cin>>n;
    vi a(n),b,c,e,f;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            for(int j=0;j<n;j++)
            {   
                if(a[j]!=a[i]) b.pb(a[j]);
                if(a[j]!=a[n-1-i]) c.pb(a[j]);
            }
            break;
        }
    }
    e=b;
    f=c;
    reverse(all(e));
    reverse(all(f));
    if(b==e || c==f) yes nl;
    else no nl;
}
void solveD()
{
    int n; cin>>n;
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++)
    {
        int k; cin>>k;
        int mx= -INF;
        for(int j=0,x;j<k;j++)
        {
            cin>>x;
            mx = max(mx,x-j+1);
        }
        ans.pb({mx,k});
    }
    sort(all(ans));
    int res=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        res=max(res,ans[i].fi-cnt);
        cnt+=ans[i].se;
    }
    cout<<res nl;
}
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
