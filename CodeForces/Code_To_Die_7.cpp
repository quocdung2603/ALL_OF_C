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
map<int,int> mp;
void factorize(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
}
void solveA()
{
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1)
    {
        yes;
        return;
    }
    int i=0;
    while(a[i]<a[i+1] && i<n-1) i++;
    while(a[i]==a[i+1] && i<n-1) i++;
    while(a[i]>a[i+1] && i<n-1) i++;
    if(i==n-1) yes;
    else no;
}
void solveB()
{
    int k; cin>>k;
    string s; cin>>s;
    int z=0;
    for(int i=0;i<s.sz;i++)
    {
        z+=(s[i]-'0');
    }
    if(z>=k) cout<<0;
    else 
    {
        int cnt=0;
        sort(all(s));
        while(z<k)
        {
            z=z-(s[cnt++]-'0')+9;
        }
        cout<<cnt;
    }
}
void solveC()
{
    int n; cin>>n;
    string s; cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.sz;i++)
    {
        if(s[i]=='(') a++;
        else b++;
    }
    if(a==b)
    {
        int cnt=0;
        for(int i=0;i<s.sz;i++)
        {
            if(s[i]=='(') cnt++;
            else 
            {
                if(cnt>0) cnt--;
            }
        }
        if(cnt<=1) yes;
        else no;
    }
    else no;
}
void solveD()
{
    int a,b; cin>>a>>b;
    if(a>b) swap(a,b);
    if((a+b)%3==0 && a*2>=b) yes nl;
    else no nl;
}
void solveE()
{
    int n; cin>>n;
    vi a(n),ans;
    map<int,int>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        factorize(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ans.pb(2);
            k[2]++;
        }
        else 
        {
            for(auto &x: mp)
            {
                if(a[i]%x.fi==0 && x.fi <=11)
                {
                    ans.pb(x.fi);
                    k[x.fi]++;
                    break;
                }
            }
        }
    }
    cout<<k.sz nl;
    fa(x,ans) cout<<x<<" ";
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
        solveE();
    }
    return 0;
}

