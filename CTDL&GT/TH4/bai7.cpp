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
    string s;cin>>s;
    stack<char>a;
    for(int i=0;i<(int)s.sz;i++)
    {
        a.push(s[i]);
    }
    int d=0,c=0,m=0;
    while(!a.empty())
    {    
        if(a.top()=='(')  d++;
        else if(a.top()==')') d--;
        else if(a.top()=='[') c++;
        else if(a.top()==']') c--;
        else if(a.top()=='{') m++;
        else if(a.top()=='}') m--;
        a.pop();
    }
    if(d==0 && m==0 && c==0)    cout<<1;
    else cout<<0;
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
