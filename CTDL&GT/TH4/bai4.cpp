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
	int n,z;cin>>n>>z;
	stack<int>a;
	if(n==0)
	{
		cout<<0;
		return;
	}
	while(n!=0)
	{
		a.push(n%z);
		n/=z;
	}
	while(!a.empty())
	{
		if (a.top() == 10)
        {
            cout << "A";
        }
        else if (a.top() == 11)
        {
            cout << "B";
        }
        else if (a.top() == 12)
        {
            cout << "C";
        }
        else if (a.top() == 13)
        {
            cout << "D";
        }
        else if (a.top() == 14)
        {
            cout << "E";
        }
        else if (a.top() == 15)
        {
            cout << "F";
        }
        else
            cout << a.top();
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
