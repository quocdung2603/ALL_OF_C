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
    vector<vector<char>> a(8,vector<char>(8));
    int white=0,black=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='K' || a[i][j]=='k' || a[i][j]=='.') continue;
            if(a[i][j]=='Q') white+=9;
            else if(a[i][j]=='R') white+=5;
            else if(a[i][j]=='B' || a[i][j]=='N') white+=3;
            else if(a[i][j]=='P') white+=1;
            else if(a[i][j]=='q') black+=9;
            else if(a[i][j]=='r') black+=5;
            else if(a[i][j]=='b' || a[i][j]=='n') black+=3;
            else if(a[i][j]=='p') black+=1;
        }
    }
    // cout<<white<<" "<<black nl;
    if(white > black) cout<<"White";
    else if(white  < black) cout<<"Black";
    else cout<<"Draw";
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