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
    string s; cin>>s;
    vector<pair<int,string>> ans;
    string x="",tmp="";
    string a[4]={"00","01","10","11"};
    for(int i=0;i<4;i++)
    {
        x+=a[i];
        if(x[0]=='0') x+='1';
        else x+='0';
        while(sz(x)<sz(s))
        {
            if(x[sz(x)-2]=='0') x+='1';
            else x+='0';
        }
        int k=0,j;
        for(int i=0;i<sz(x);i++)
        {
            for(j=k;j<sz(s);j++)
            {
                if(x[i]==s[j])
                {
                    tmp+=s[j]; break;
                }
            }
            k=j+1;
        }
        ans.pb({sz(tmp),tmp});
        x="",tmp="";
    }
    sort(all(ans));
    cout<<ans[sz(ans)-1].se;
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
