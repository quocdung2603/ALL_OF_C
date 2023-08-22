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
    int n; cin>>n;
    vi a(n);
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx) 
        {
            if(abs(a[i]-mx)==1) mx=a[i];
            else
            {
                cout<<i+1 nl;
                return;
            }
        }
    }
    cout<<-1 nl;
}
void solveB()
{
    double n; cin>>n;
    n=sqrt(n);
    cout<<ceil(n+n);
}
void solveC()
{
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    map<pair<int,int>,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].fi>>a[i].se;
    }
    for(int j=0;j<n;j++)    
    {
        int x,y; cin>>x>>y;
        for(int i=0;i<n;i++)
        {
            mp[{a[i].fi+x,a[i].se+y}]++;
        }
    }
    for(auto x: mp)
    {
        if(x.se==n)
        {
            cout<<x.fi.fi<<" "<<x.fi.se;
            return;
        }
    }
}
int counts(string a,string b)
{
	int cnt=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=b[i] && b[i]!=' ' && a[i]!=' ')
		{
			cnt++;
		}
	}
	return cnt;
}
void solveD()
{
    int n,mn=INF,p=0; cin>>n;
    string s; cin>>s;
    if(n%3==1) s+="  ";
    else if(n%3==2) s+=" ";
    vector<string> x={"RGB","RBG","BRG","BGR","GBR","GRB"};
    vector<int> cnt(6);
    for(int i=0;i<n;i+=3)
    {
        string tmp="";
        tmp=tmp+s[i]+s[i+1]+s[i+2];
        for(int j=0;j<6;j++)
        {
            cnt[j]+=counts(tmp,x[j]);
        }
    }
    for(int i=0;i<6;i++) 
    {
        if(cnt[i]<mn)
        {
            mn=cnt[i];
            p=i;
        }
    }
    cout<<cnt[p] nl;
    for(int j=0;j<n;j++) cout<<x[p][j%3];
}

signed main()
{
    fast_in_out();
    int u = 1;
    //cin >> u;
    while (u--)
    {
        solveD();
    }
    return 0;
}
