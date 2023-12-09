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
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

//void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
// void sieve(int N)
// {
//     bool isPrime[N+1];
//     for(int i=0; i<=N; i++)
//             isPrime[i] = true;
//     isPrime[0]=false;
//     isPrime[1]=false;
//     for(int i=2; i*i<=N; i++)
//         {
//         if(isPrime[i]==true)
//             {
//                 for(int j=i*i; j<=N; j+=i)
//                     isPrime[j]=false;
//         }
//     }
// }
// vector<int> factorize(int n)
// {
//     vector <int> res;
//     for (int i=2; i*i<=n; i++)
//         {
//         while (n%i==0)
//             {
//             res.push_back(i);
//             n/=i;
//         }
//     }
//     if (n!=1) res.push_back(n);
//     return res;
// }
// int kCn(int k, int n)
// {
//     int result=1;
//     for (int i=n, j=1; j<=k; i--, j++) 
//         result=result*i/j;
//     return result;
// }
int bin_pow(int a,int b,int mod)
{
    if(b==0)return 1;
    int tmp=bin_pow(a,b/2,mod);
    if((b&1)==false){
        return (tmp*tmp)%mod;
    }
    return (a*(tmp*tmp)%mod)%mod;
}
void solve()
{
    int n,m; cin>>n>>m;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(m==1)
    {
        int s=0;
        for(int i=0;i<n;i++)
        {
            s=s+bin_pow(2,a[i],mod);
            s%=mod;
        }
        cout<<s;
    }
    else 
    {
        sort(all(a));
        int k = bin_pow(2,a[n-1],mod);
        k=k%mod;
        cout<<k;
    }
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
