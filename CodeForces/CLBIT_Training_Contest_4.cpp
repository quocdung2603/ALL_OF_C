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
    int h,m; cin>>h>>m;
    cout<<1440-h*60-m nl;
}
void solveB()
{
    int n; cin>>n;
    if(n%2==0) cout<<n/2 nl;
    else cout<<n/2+1 nl;
}
void solveC()
{
    int n,x,cnt=1; cin>>n>>x;
    n-=2;
    while(n>0)
    {
        n-=x;
        cnt++;
    }
    cout<<cnt nl;
}
void solveD()
{
    int n; cin>>n;
    vi a(n),b(n);
    int mna=INF,mnb=INF;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mna=min(a[i],mna);
    }
    for(int i=0;i<n;i++) 
    {
        cin>>b[i];
        mnb=min(b[i],mnb);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mna && b[i]>mnb)
        {
            if(a[i]-mna <= b[i]-mnb)
            {
                b[i]-=(a[i]-mna);
                ans+=(a[i]-mna);
                a[i]=mna;
            }
            else 
            {
                a[i]-=(b[i]-mnb);
                ans+=(b[i]-mnb);
                b[i]=mnb;
            }
        }
        if(a[i]>mna && b[i]==mnb)
        {
            ans+=(a[i]-mna);
            a[i]=mna;
        }
        if(b[i]>mnb && a[i]==mna)
        {
            ans+=(b[i]-mnb);
            b[i]=mna;
        }
    }
    cout<<ans nl;
}
void solveE()
{
    int n,a[3]; cin>>a[0]>>a[1]>>a[2]>>n;
    if(a[0]==a[1] && a[0]==a[2])
    {
        if(n%3==0) yes nl;
        else no nl;
    }
    else 
    {
        sort(a,a+3);
        if((a[2]-a[1] + a[2]-a[0]) > n) no nl;
        else 
        {
            n-=(a[2]-a[1] + a[2]-a[0]);
            if(n%3==0) yes nl;
            else no nl;
        }
    }
}
void solveF()
{
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    int cnt=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=cnt)
        {
            //cout<<a[i]<<" "<<cnt nl;
            a[i]-=(a[i]-cnt);
            cnt++;
        }
    }
    cout<<a[n-1]+1 nl;
}
void solveG()
{
    int n; cin>>n;
    vi a(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>a[i-1]) a[i]=a[i-1]+1;
    }
    int s=0;
    for(int i=1;i<=n;i++)
    {
        // cout<<a[i]<<" ";
        s+=a[i];
    }
    cout<<s;
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
        solveG();
    }
    return 0;
}
