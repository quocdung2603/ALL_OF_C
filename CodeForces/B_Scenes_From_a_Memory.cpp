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

int snt(int n)  
{
    if(n<2) return 0;
    else if(n==2 || n==3) return 1;
    else if(n%2==0 || n%3==0) return 0;
    for(int i=5;i<=sqrt(n);i+=6)
    {
        if(n%i==0 || n%(i+2)==0) 
            return 0;
    }
    return 1;
}
void solve()
{
    int n;  cin>>n;
    string s; cin>>s;
    for(int i=0;i<s.sz;i++)
    {
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8'|| s[i]=='9')
        {
            cout<<1 nl<<s[i] nl;
            return;
        }
    }

    for(int i=0;i<s.sz-1;i++)
    {
        int x=(s[i]-48);
        for(int j=i+1;j<s.sz;j++)
        {
            int k=x*10 + (s[j]-48);
            //cout<<k nl;
            if(snt(k)==0)
            {
                cout<<2 nl <<s[i]<<s[j] nl;
                return;
            }
        }
    }
}

void solve1()
{
    cout<<snt(53);
}
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}
