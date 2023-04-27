#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define sw swap
#define fi first
#define se second
#define vd vector<double>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vll vector<long long>
#define vtr vector<string>
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define db double
#define ld long double
#define bb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define be begin()
#define en end()
#define rbe rbegin()
#define ren rend()
#define sz size()
#define wh while
#define fon(i, l, r) for (int i = l; i <= r; i++)
#define fod(i, r, l) for (int i = r; i >= l; i--)
#define fa(x, a) for (auto &x : a)
#define gcd __gcd
#define fast_in_out()                 \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
// tt
void solve()
{
	int n;cin>>n;
	int cnt=0;
	stack<string> a;
	while(n>0)
	{
		if(cnt==0)
		{
			int x=n%10;
			if(x==1)	a.push("I");
			else if(x==2)	a.push("II");
			else if(x==3)	a.push("III");
			else if(x==4)	a.push("IV");
			else if(x==5)	a.push("V");
			else if(x==6)	a.push("VI");
			else if(x==7)	a.push("VII");
			else if(x==8)	a.push("VIII");
			else if(x==9)	a.push("IX");
			cnt++;
			n/=10;
			continue;
		}
		if(cnt==1)
		{
			int x=n%10;
			if(x==1)	a.push("X");
			else if(x==2)	a.push("XX");
			else if(x==3)	a.push("XXX");
			else if(x==4)	a.push("XL");
			else if(x==5)	a.push("L");
			else if(x==6)	a.push("LX");
			else if(x==7)	a.push("LXX");
			else if(x==8)	a.push("LXXX");
			else if(x==9)	a.push("XC");
			cnt++;
			n/=10;
			continue;
		}
		if(cnt==2)
		{
			int x=n%10;
			if(x==1) 	a.push("C");
			else if(x==2)	a.push("CC");
			else if(x==3)	a.push("CCC");
			else if(x==4)	a.push("CD");
			else if(x==5)	a.push("D");
			else if(x==6)	a.push("DC");
			else if(x==7)	a.push("DCC");
			else if(x==8)	a.push("DCCC");
			else if(x==9)	a.push("CM");
			cnt++;
			n/=10;
			continue;
		}
		if(cnt==3)
		{
			int x=n%10;
			if(x==1) 	a.push("M");
			else if(x==2)	a.push("MM");
			else if(x==3)	a.push("MMM");
			else if(x==4)	a.push("MMMM");
			cnt++;
			n/=10;
			continue;
		}
	}
	while(!a.empty())
	{
		cout<<a.top();
		a.pop();
	}
}
signed main()
{
	fast_in_out();
	int t = 1;
	//cin >> t;
	while (t--)
		solve();
	return 0;
}
