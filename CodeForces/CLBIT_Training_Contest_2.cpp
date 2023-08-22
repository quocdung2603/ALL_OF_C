#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vi vector<int>
#define vec(type,name, sl) vector<type>name(sl)
#define yes cout << "yes"
#define no cout << "no"
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
void A()
{
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(is_sorted(all(a)))
    {
        yes nl;
        cout<<1<<" "<<1 nl;
        return;
    }
    int l=0,r=0,ok=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i] > a[i+1]) 
        {
            if(ok==0)
            {
                l=i;
                r=i+1;
                ok=1;
            }
            else 
            {
                ok=1;
                r=i+1;
            }
        }
    }
    // cout<<l<<" "<<r nl;
    reverse(a.begin()+l , a.begin()+r+1);
    if(is_sorted(all(a)))
        yes nl << l+1<<" "<<r+1 nl;
    else no nl;
}
void B()
{
    string ok="qwertyuiopasdfghjkl;zxcvbnm,./";
    char x;
    string s; cin>>x>>s;
    if(x=='L')
    {
        for(int i=0;i<s.sz;i++)
        {
            for(int j=0;j<ok.sz;j++)
            {
                if(s[i]==ok[j])
                {
                    s[i]=ok[j+1];
                    break;
                }
            }
        }
    }
    else 
    {
        for(int i=0;i<s.sz;i++)
        {
            for(int j=0;j<ok.sz;j++)
            {
                if(s[i]==ok[j])
                {
                    s[i]=ok[j-1];
                    break;
                }
            }
        }
    }
    cout<<s;
}
void C()
{
    int n,ans=0; cin>>n;
    string s; cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]]==0) ans+=2;
        else ans+=1;
        mp[s[i]]++;
    }
    cout<<ans nl;
}
void D()
{
    int n; cin>>n;
    vector<vector<int>> a(n);
    vector<pair<int,int>> ans(n);
    int mxmn=INF,s=0;
    for(int i=0,m;i<n;i++)
    {
        cin>>m;
        int mn=INF,smin=INF,cnt=0;
        for(int j=0,x;j<m;j++)
        {
            cin>>x;
            mn=min(mn,x);
            a[i].pb(x);
        }
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==mn) cnt++;
            if(a[i][j] < smin && a[i][j]>mn)
            {
                smin=a[i][j];
            }
        }
        if(cnt>1)
        {
            smin=mn;
        }
        mxmn = min(mxmn,mn);
        ans[i].fi = mn;
        ans[i].se = smin;
        s+=smin;
    }
    int z=-INF;
    for(int i=0;i<n;i++)
    {
        int tmp = s-ans[i].se + mxmn;
        z=max(z,tmp);
    }
    cout<<z nl;
}
void E()
{
    int n; cin>>n;
    vi a(n),b,c;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    if(a[0]==a[n-1])
    {
        cout<<-1 nl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[0]) b.pb(a[i]);
        else c.pb(a[i]);
    }
    cout<<b.sz<<" "<<c.sz nl;
    fa(x,b) cout<<x<<" ";
    cout nl;
    fa(x,c) cout<<x<<" ";
    cout nl;
}
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        E();
    }
    return 0;
}
