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
    string s;cin>>s;
    int cnt=count(all(s),'X');
    if(cnt==0) cout<<0 nl;
    else if(cnt==12) cout<<"6 1x12 2x6 3x4 4x3 6x2 12x1" nl;
    else 
    {
        vector<string> ans; 
        ans.bb("1x12");
        char b[6][2],c[2][6],d[4][3],e[3][4];
        int check[6]={0},k;
        // memset(c,'?',sizeof(c));
        // for(int i=0;i<12;i++)
        //     for(int j=0;j<12) a[i][j]=s[i];
        k=0;
        for(int i=0;i<6;i++)
            for(int j=0;j<2;j++)
            {
                b[i][j]=s[k];
                k++;
            }
        k=0;
        for(int i=0;i<2;i++)
            for(int j=0;j<6;j++)
            {
                c[i][j]=s[k];
                k++;
            }
        k=0;
        for(int i=0;i<4;i++)
            for(int j=0;j<3;j++)
            {
                d[i][j]=s[k];
                k++;
            }
        k=0;
        for(int i=0;i<3;i++)
            for(int j=0;j<4;j++)
            {
                e[i][j]=s[k];
                k++;
            }
        // 2 6
        for(int i=0;i<6;i++)
        {
            int cnt=0;
            for(int j=0;j<2;j++)
            {
                if(c[j][i]=='X') cnt++;
                // cout<<c[i][j];
            }
            // cout<<cnt nl;
            if(cnt==2)
            {
                ans.bb("2x6");
                break;
            }
        }
        // 3 4
        for(int i=0;i<4;i++)
        {
            int cnt=0;
            for(int j=0;j<3;j++)
            {
                if(e[j][i]=='X') cnt++;
            }
            if(cnt==3)
            {
                ans.bb("3x4");
                break;
            }
        }
        //4 3
        for(int i=0;i<3;i++)
        {
            int cnt=0;
            for(int j=0;j<4;j++)
            {
                if(d[j][i]=='X') cnt++;
            }
            if(cnt==4)
            {
                ans.bb("4x3");
                break;
            }
        }
        //6 2
        for(int i=0;i<2;i++)
        {
            int cnt=0;
            for(int j=0;j<6;j++)
            {
                if(b[j][i]=='X') cnt++;
                // cout<<b[i][j]<<" ";
            }
            // cout<<cnt<<" ";
            if(cnt==6)
            {
                ans.bb("6x2");
                break;
            }
        }
        cout<<ans.sz<<" ";
        for(int i=0;i<ans.sz;i++) cout<<ans[i]<<" ";
        cout nl;
    }

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