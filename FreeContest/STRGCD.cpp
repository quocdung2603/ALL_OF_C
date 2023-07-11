#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define all(vr) vr.begin(), vr.end()
#define rall(vr) vr.rbegin(), vr.rend()
#define ll long long
#define ld long double
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define For(i, l, r) for (int i=l; i<=r; i++)
#define Fod(i, r, l) for (int i=r; i>=l; i--)
#define wh while
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define si size()
#define pii pair<int, int>
#define mina *min_element
#define maxa *max_element
#define fast_in_out ios_base::sync_with_stdio(false); cin.tie(NULL);
const char nl = '\n';
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
void solve()
{
	string a, b; cin >> a >> b;
	int id1=a.size()-1, id2=b.size()-1;
	while (id1!=id2) {
		if (id1>id2) {
			int tmp=id2;
			for (; id2>=0; id1--, id2--) {
				if (a[id1]!=b[id2]) {
					cout << "NOT FOUND";
					return;
				}
			}
			id2=tmp;
		} else {
			int tmp=id1;
			for (; id1>=0; id1--, id2--) {
				if (a[id1]!=b[id2]) {
					cout << "NOT FOUND";
					return;
				}
			}
			id1=tmp;
		}
	}
	for (int i=0; i<=id1; i++) {
		cout << a[i];
	}
}
signed main()
{
	fast_in_out
	system("color 2");
	int t=1;
//	cin >> t;
	wh (t--)
		solve();
	return 0;
}

