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
    string s; cin>>s;
    int k;cin>>k;
    map<char,int>mp;
    for(int i=0;i<(int)s.sz;i++)
    {
        mp[s[i]]++;
    }
    if((int)s.sz<k) cout<<"impossible";
    else 
    {
        if((int)mp.sz>=k) cout<<0;
        else cout<<k-(int)mp.sz;
    }
}
void solveB()
{
    int a,b; cin>>a>>b;
    while(true)
    {
        if(a==0 || b==0) break;
        if(a>=2*b)
        {
            int t = a/(2*b);
            a-=(t*2*b);
        }
        else if(b>=2*a)
        {
            int t = b/(2*a);
            b-=(t*2*a);
        }
        else break;
    }
    cout<<a<<" "<<b;
}
void solveC()
{
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n%2==0)
    {
        for(int i=0;i<n;i+=2)
        {
            if(a[i]>a[i+1]) 
                swap(a[i],a[i+1]);
        }
    }
    else 
    {
        for(int i=1;i<n;i+=2)
        {
            if(a[i]>a[i+1]) 
                swap(a[i],a[i+1]);
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            no nl;
            return;
        }
    }
    yes nl;
}
void solveE()
{
    int n,s; cin>>n>>s;
    if(n==1)
    {
        if(s!=1) yes nl << s nl<< 1;
        else no;
    }
    else if(n==s)
    {
        no;
    }
    else
    {
        if(s/2 < n) 
        {
            no;
        }
        else 
        {
            yes nl;
            for(int i=0;i<n-1;i++)
            {
                cout<<2<<" ";
                s-=2;
            }
            cout<<s nl<<1;
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
        solveE();
    }
    return 0;
}
