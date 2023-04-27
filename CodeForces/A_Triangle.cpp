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
#define fon(i, l, r) fon (int i = l; i <= r; i++)
#define fod(i, r, l) fon (int i = r; i >= l; i--)
#define fa(x, a) fon (auto &x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
// tt
void solve()
{
	int a[4];
    for(int i=0;i<4;i++) cin>>a[i];
    for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if (j==i) continue;
			for(int k=0;k<4;k++)
			{
				if (k==i || k==j) continue;
				if (a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i])
				{
					cout << "TRIANGLE";
					return;
				}
			}
		}
	}
        for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if (j==i) continue;
			for(int k=0;k<4;k++)
			{
				if (k==i || k==j) continue;
				if (a[i]+a[j]==a[k] || a[i]+a[k]==a[j] || a[j]+a[k]==a[i])
				{
					cout << "SEGMENT";
					return;
				}
			}
		}
	}
	cout << "IMPOSSIBLE";
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