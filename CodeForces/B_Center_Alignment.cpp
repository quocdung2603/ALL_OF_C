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
#define fon(i, l, r) for (int i = l; i <= r; i++)
#define fod(i, r, l) for (int i = r; i >= l; i--)
#define fa(x, a) for (auto x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
void solve()
{
    vector<string> a;
    string s;
    int mx=-INF;
    int cnt=0;
    while(getline(cin,s))
    {
        a.bb(s);
        if(s.sz>mx) mx=s.sz;
    }
    for(int i=0;i<mx+2;i++) 
        cout<<"*";
    cout nl;
    for(int i=0;i<a.sz;i++)
    {
        int t=mx-a[i].sz;
        if(a[i].sz==0)
        {
            cout<<"*";
            for(int i=0;i<mx;i++) cout<<" ";
            cout<<"*";
        }
        else if(t%2==0)
        {
            cout<<"*";
            for(int j=0;j<t/2;j++) cout<<" ";
            cout<<a[i];
            for(int j=0;j<t/2;j++) cout<<" ";
            cout<<"*";
        }
        else 
        {
            cnt++;
            if(cnt%2==0)
            {
                cout<<"*";
                for(int j=0;j<t/2+1;j++) cout<<" ";
                cout<<a[i];
                for(int j=0;j<t/2;j++) cout<<" ";
                cout<<"*";
            }
            else 
            {
                cout<<"*";
                for(int j=0;j<t/2;j++) cout<<" ";
                cout<<a[i];
                for(int j=0;j<t/2+1;j++) cout<<" ";
                cout<<"*";
            }
        }
        cout nl;
    }
    for(int i=0;i<mx+2;i++) 
        cout<<"*";
    cout nl;
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