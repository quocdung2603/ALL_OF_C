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
// tt
// char a[50][50];
// int n,m;
// int dx[4]={1,1,1,1};
// int dy[4]={0,0,0,0};
//
// void dfs(int i , int j)
// {
//     for(int k=0;k<4;k++)
//     {
//         int ii = i+dx[k];
//         int jj = j+dy[k];
//         if(ii>=0 && ii<n && jj>=0 && jj<m && a[ii][jj]=='.' && a[i][j]=='*')
//         {
//             swap(a[ii][jj] , a[i][j]);
//             dfs(ii,jj);
//         }
//     }
// }
// void solve()
// {
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++) cin>>a[i][j];
//     int z=50;
//     while(z--)
//     {
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(a[i][j]=='*') 
//                     dfs(i,j);
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<a[i][j];
//         }
//         cout nl;
//     }
//     cout nl;
// }
void solve1()
{
    int n,m;cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<m;i++)
    {
        int c= n-1;
        // cout<<a[c][i];
        for(int j=n-1;j>=0;j--)
        {
            if(a[j][i]=='o') c=j-1;
            else if(a[j][i]=='*')
            {
                swap(a[j][i], a[c][i]);
                c--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[i][j];
        cout nl;
    }
    cout nl;
}
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        solve1();
    }
    return 0;
}