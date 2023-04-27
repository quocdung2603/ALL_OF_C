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
    string x;cin>>x;
    string a="",b="";
    a=a+x[0]+x[1];
    b=b+x[3]+x[4];    
    int h = atoi(a.c_str()) , p = atoi(b.c_str());
    // cout<<h<<" "<<p;
    for(int i=h;i<=23;i++)
    {
        
        if(i!=h) p=-1;
        for(int j=p+1;j<=59;j++)
        {
            string s="";
            if(i<10) s=s+ '0'+to_string(i);
            else s=s+to_string(i);
            s=s+ ':';
            if(j<10) s=s+'0'+to_string(j);
            else s=s+to_string(j);
            // cout<<s nl;
            string t=s;
            reverse(all(t));
            if(t==s) 
            {
                cout<<s;
                return;
            }
        }
    }
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<=59;j++)
        {
            string s="";
            if(i<10) s=s+ '0'+to_string(i);
            else s=s+to_string(i);
            s=s+ ':';
            if(j<10) s=s+'0'+to_string(j);
            else s=s+to_string(j);
            string t=s;
            // cout<<s nl;
            reverse(all(t));
            if(t==s) 
            {
                cout<<s;
                return;
            }
        }
    }
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