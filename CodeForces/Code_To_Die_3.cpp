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
void solveA() //Inna and Choose Options
{
    string s;cin>>s;
    vector<int> k={1,2,3,4,6,12};
    vector<string> ans;
    for(int z=0;z<k.sz;z++)
    {
        vector<vector<char>> a(k[z],vector<char>(k[k.sz-z-1]));
        int cnt=0;
        for(int i=0;i<k[z];i++)
        {
            for(int j=0;j<k[k.sz-z-1];j++)
            {
                a[i][j]=s[cnt++];
            }
        }
        for(int i=0;i<k[k.sz-z-1];i++)
        {
            int cnt=0;
            for(int j=0;j<k[z];j++)
            {
                // cout<<a[j][i];
                if(a[j][i]=='X') cnt++;
            }
            if(cnt==k[z]) 
            {
                string tmp=to_string(k[z])+"x"+to_string(k[k.sz-z-1]);
                ans.pb(tmp);
                break;
            }
            // cout nl;
        }
    }
    cout<<ans.sz <<" ";
    fa(x,ans) cout<<x<<" ";
    cout nl;
}
void solveB() //Math Problem
{
    int n; cin>>n;
    int mx=-INF,mn=INF;
    for(int i=0,x,y; i<n;i++)
    {
        cin>>x>>y;
        mx=max(mx,x);
        mn=min(mn,y);
    }
    // cout<<mx<<" "<<mn nl;
    cout<<max(mx-mn,0LL) nl;
}
void solveE() //Quasi Binary
{
    int n; cin>>n;
    vi a;
    while(n>0)
    {
        string s= to_string(n); //12345
        int k=0;
        for(int i=0;i<s.sz;i++)
        {
            if(s[i]!='0') k=k*10+1;
            else k=k*10;
        }
        //11111
        a.pb(k);
        n-=k;
    }
    cout<<a.sz nl;
    fa(x,a) cout<<x<<" ";
}
void solveD() //Shuffle
{
    int n,x,m; cin>>n>>x>>m;
    int a=x,b=x;
    while(m--)
    {
        int l,r; 
        cin>>l>>r;
        if((l<=a && a<=r) || (l<=b && b<=r ))
        {
            a=min(a,l);
            b=max(b,r);
        }
    }
    cout<<b-a+1 nl;
}   
void solveC() //Neighbor Grid
{
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int k=4;
            if(i==0) k--;
            if(i==n-1) k--;
            if(j==0) k--;
            if(j==m-1) k--;
            if(a[i][j]>k)
            {
                no nl;
                return;
            }
            a[i][j]=k;
        }
    }
    yes nl;
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout nl;
    }
}
signed main()
{
    fast_in_out();
    int u = 1;
    cin >> u;
    while (u--)
    {
        solveA();
    }
    return 0;
}
