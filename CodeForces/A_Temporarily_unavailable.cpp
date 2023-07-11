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
#define sz(x) (int)x.size()
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
void solve()
{
    int a,b,c,r; cin>>a>>b>>c>>r;
    if(a>b)  swap(a,b);
    if(c>a && c<b)
    {
        if(c-r <=a && c+r>=b) cout<<0 nl;
        else if(c-r<=a)
        {
            cout<<b-(c+r) nl;
        }
        else if(c+r>=b)
        {
            cout<<(c-r)-a nl;
        }
        else 
        {
            int x1 = (c-r)-a;
            int x2 =  b-(c+r);
            cout<<x1+x2 nl;
        }
    }
    else if(c==a)
    {
        if(c+r>=b) cout<<0 nl;
        else cout<<b-(c+r) nl;
    }
    else if(c==b)
    {
        if(c-r<=a) cout<<0 nl;
        else cout<<(c-r)-a nl;
    }
    else if(c<a)
    {   
        if(c+r>a) 
        {
            if(c+r>=b) cout<<0 nl;
            else cout<<b-(c+r) nl;
        }
        else cout<<b-a nl;
    }
    else
    {
        if(c-r<b)
        {
            if(c-r<=a) cout<<0 nl;
            else cout<<(c-r)-a nl;
        }
        else cout<<b-a nl;
    }
}

void solve1()
{
    int a, b, c, r, s=0; cin >> a >> b >> c >> r;
	if (a>b) swap(a, b);
	if (b<=c-r || a>=c+r) cout << b-a nl;
	else
	{
		if (a<=c-r) s+=c-r-a;
		if (b>c+r) s+=b-c-r;
		cout << s nl;
	}
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
