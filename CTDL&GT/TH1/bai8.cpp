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
#define ll long long
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
const int mod = 998244353;
// tt
void solve()
{
	int n;cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n-1;i++)
	{
		int Min=i;
		for(int j=i+1;j<n;j++)
			if(a[Min]>a[j])
				Min=j;
		swap(a[i],a[Min]);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
signed main()
{
	fast_in_out();
	int t = 1;
	//cin >> t;
	wh(t--)
		solve();
	return 0;
}

