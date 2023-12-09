#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vi vector<int>
#define vec(type,name, sl) vector<type>name(sl)
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define double long double
#define pb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
#define fon(i, l, r) for (int i = l; i <= r; i++)
#define fod(i, r, l) for (int i = r; i >= l; i--)
#define fa(x, a) for (auto x : a)
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;

int gcd(int A, int B) {
    if (B == 0) return A;
    else return gcd(B, A % B);
}
void loop_subset(const vector<int> &s, map<vector<int>,int> &mp, int &ans){
    for (int mask=0; mask<(1<<s.size()); mask++){
        vector<int> a;
        for (int i=0; i<s.size(); i++){
            if (mask & (1<<i))
            {
                a.pb(s[i]);
            }
        }
        if(mp[a]!=0)
        {
            ans+=mp[a];
            ans%=mod;
        }
        else 
        {
            int z=0,cnt=0;
            fa(x,a)
            {
                if(cnt==0)
                {
                    z=x;
                    cnt++;
                }
                else 
                {
                    z=gcd(x,z);
                }
            }
            mp[a]=z;
            ans+=z;
            ans%=mod;
        }
    }
}
void solve()
{
    int n; cin>>n;
    vector<int> a(n);
    int ans=0;
    map<vector<int>,int> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    loop_subset(a,mp,ans);
    cout<<ans%mod nl;
}
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}
