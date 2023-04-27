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
	string s,s1;cin>>s>>s1;
	stack<char>a;
	stack<char>b;
	for(int i=0;i<(int)s.sz;i++)
		a.push(s[i]);
	for(int i=0;i<(int)s1.sz;i++)
		b.push(s1[i]);
	stack<char>ans;
	bool check=false;
	int z=(a.top()-48)+(b.top()-48);
	if(z>=10)
	{
		z-=10;
		ans.push(char(z+48));
		check=true;
	}
	else 
		ans.push(char(z+48));
	a.pop();
	b.pop();
	while(!a.empty() && !b.empty())
	{
		int z=(a.top()-48)+(b.top()-48);
		if(z>=10)
		{
			z-=10;
			if(check==true)
			{
				z++;
				ans.push(z+'0');
				check=true;
			}
			else 
			{
				ans.push(char(z+48));
				check=true;
			}
			a.pop();
			b.pop();
		}
		else
		{
			if(check==true)
			{
				z++;
				if(z==10)
				{
					z-=10;
					ans.push(char(z+48));
					check=true;
				}
				else 
				{
					ans.push(char(z+48));
					check=false;
				}
			}
			else 
			{
				ans.push(char(z+48));
				check=false;
			}
			a.pop();
			b.pop();
		}
	}
	while(!a.empty())
	{
		ans.push(a.top());
		a.pop();
	}
	while(!b.empty())
	{
		ans.push(b.top());
		b.pop();
	}
	while(!ans.empty())
	{
		cout<<ans.top();
		ans.pop();
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
