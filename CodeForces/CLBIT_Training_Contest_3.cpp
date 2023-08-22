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
    int n,k,d,w; cin>>n>>k>>d>>w;
    vi t(n);
    for(int i=0;i<n;i++) cin>>t[i];
    int cnt=1,hsd= t[0]+d+w,ans=0;
    for(int i=1;i<n;i++)
    {
        if(t[i]>hsd || cnt==k)
        {
            hsd=t[i]+d+w;
            cnt=1;
            ans++;
        }
        else cnt++;
    }
    cout<<ans+1 nl;
}
void solveB() //Saitama Destroys Hotel
{
    int n,s; cin>>n>>s;
    for(int i=0,x,y;i<n;i++)
    {
        cin>>x>>y;
        s=max(s,x+y);
    }
    cout<<s;
}
void solveC() //Rudolph and Tic-Tac-Toe
{
    string a,b,c; cin>>a>>b>>c;
    char x='.';
    for(int i=0;i<3;i++)
    {   
        if(a[i]==b[i] && a[i]==c[i] && a[i]!='.')
        {
            x=a[i];
            break;
        }
    }
    if(x!='.') cout<<x nl;
    else 
    {
        if(a[0]==a[1] && a[0]==a[2] && a[0]!='.') cout<<a[0] nl;
        else if(b[0]==b[1] && b[0]==b[2] && b[0]!='.') cout<<b[0] nl;
        else if(c[0]==c[1] && c[0]==c[2] && c[0]!='.') cout<<c[0] nl;
        else if(a[0]==b[1] && a[0]==c[2] && a[0]!='.') cout<<a[0] nl;
        else if(c[0]==b[1] && c[0]==a[2] && c[0]!='.') cout<<c[0] nl;
        else cout<<"DRAW" nl;
    }
}
void solveD() //Rudolph and Cut the Rope
{
    int n,cnt=0; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y; cin>>x>>y;
        if(x-y>0) cnt++;
    }
    cout<<cnt nl;
}
void solveE() //Sasha and Array Coloring
{
    int n,s=0; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    for(int i=0;i<n/2;i++)
    {
        s+=(a[n-1-i]-a[i]);
    }
    cout<<s nl;
}
void solveF() //Min Max Swap
{
    int n; cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++)    
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i]) swap(a[i],b[i]);
    }
    sort(all(a));
    sort(all(b));
    cout<<a[n-1]*b[n-1] nl;
}
void solveG() //Big Vova
{
    int n; cin>>n; 
    vector<int> a(n),b;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(rall(a));
    b.pb(a[0]);
    int zz=a[0];
    a[0]=0;
    for(int j=1;j<n;j++)
    {
        int mx=-INF,p=0;
        for(int i=0;i<n;i++)
        {   
            if(a[i]!=0 && __gcd(a[i],zz)>mx)
            {
                mx =__gcd(a[i],zz);
                p=i;
            }
        }
        b.pb(a[p]);
        a[p]=0;
        zz=mx;
    }
    fa(x,b) cout<<x<<" ";
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
        solveA();
    }
    return 0;
}
