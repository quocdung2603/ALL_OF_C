#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vd vector<double>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vtr vector<string>
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define ld long double
#define bb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
#define wh while
#define fon(i, l, r) for (int i = l; i <= r; i++)
#define fod(i, r, l) for (int i = r; i >= l; i--)
#define fa(x, a) for (auto &x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
// tt
string dectobi(int n,int l)
{   
    string a="";
    while(n!=0)
    {
        a = char((n%2)+'0') + a;
        n/=2;
    }
    while (a.sz<l) a= "0" +a;
    return a;
}
int decimal(string s)
{
	int x=0;
	fon(i, 0, s.sz-1)
		x=x*2+(s[i]-'0');
	return x;
}
void solve()
{
    int n,l;cin>>n>>l;
    string ans="";
    int c1[l]={},c0[l]={};
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        int cnt1=0,cnt0=0;
        string a=dectobi(x,l);
        for(int j=0;j<a.sz;j++)
        {
            if(a[j]=='1') c1[j]++;
            else c0[j]++;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(c1[i]>c0[i]) ans+="1";
        else ans+="0";
    } 
    cout<<decimal(ans) nl;
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