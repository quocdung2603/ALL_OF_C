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
	int k, x, cnt=0; cin >> k >> x;
	bool check[k+1]={0};
	queue <int> q;
	vector <int> a;
	for (int i=0; i<x; i++)
	{
		int t; cin >> t;
		check[t]=true;
	}
	for (int i=1; i<=k; i++)
		if (!check[i])
			q.push(i);
	while (!q.empty())
	{
		for (auto x : a)
		{
			if (q.front()-x==2 || (q.front()%2==0 && q.front()-x==1))
				cnt++;
		}
		a.push_back(q.front());
		q.pop();
	}
	cout << cnt;
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
