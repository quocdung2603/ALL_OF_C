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
//void Qs(vector<int>a , int l , int r)
//{
//	int i=l,j=r,x=a[(l+r)/2];
//	do
//	{
//		while(a[i]<x) i++;
//		while(a[j]>x) j--;
//		if(i<=j)
//		{
//			swap(a[i],a[j]);
//			i++;
//			j--;
//		}
//	}while(i<=j);
//	for(int k=0;k<a.size();k++)
//		cout<<a[k]<<" ";
//	cout<<endl;
//	if(l<j)	Qs(a,l,j);
//	if(i<r) Qs(a,i,r);
//}
//How the Avocado Became the Fruit of the Global Trade
void solve()
{
	string s; getline(cin,s);
	string x="";
	s+=' ';
	vector<int>a;
	vector<string>b;
	for(int i=0;i<(int)s.size();i++)
	{
		if(s[i]!=' ')
		{
			if(s[i]>=65 && s[i]<=90)
				x+=(s[i]+32);
			else if(s[i]==',' || s[i]=='?')
				continue;
			else 
				x+=s[i];
		}
		else 
		{
			a.push_back((int)x.size());
			b.push_back(x);
			x="";
		}
	}
	sort(a.rbegin(), a.rend());
	x="";
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<(int)b.size();i++)
		{
			if((int)b[i].size()==a[j])
			{
				string x="#";
				x+=b[i];
				b.erase(b.begin()+i);
				cout<<x<<endl;
				break;
			}
			x="";
		}
	}
}
signed main()
{
	int t=1;
	//cin >> t;
	while(t--)
		solve();
	return 0;
}
