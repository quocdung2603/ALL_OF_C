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
//void sieve(int N)
//{
//    bool isPrime[N+1];
//    for(int i=0; i<=N; i++)
//		isPrime[i] = true;
//    isPrime[0]=false;
//    isPrime[1]=false;
//    for(int i=2; i*i<=N; i++)
//	{
//        if(isPrime[i]==true)
//		{
//			for(int j=i*i; j<=N; j+=i)
//                 isPrime[j]=false;
//        }
//    }
//}
int factorize(int n)
{
	int ans=1, cnt=0;
	while (n%2==0) {
		n/=2;
		cnt++;
	}
	ans*=cnt+1;
    for (int i=3; i*i<=n; i+=2)
	{
		int cnt=0;
        while (n%i==0)
		{
            cnt++;
            n/=i;
        }
        ans*=cnt+1;
    }
    if (n!=1) {
    	ans*=2;
	}
    return ans;
}
//int kCn(int k, int n)
//{
//	int result=1;
//	for (int i=n, j=1; j<=k; i--, j++)
//	    result=result*i/j;
//	return result;
//}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove());
*/
void solve()
{
	int n; cin >> n;
	int ans=0;
	for (int i=1; i<n-i; i++) {
		ans+=factorize(i)*factorize(n-i);
	}
	if (n%2==0) {
		int t=factorize(n/2);
		ans*=2;
		ans+=t*t;
	} else {
		ans*=2;
	}
	cout << ans;
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

