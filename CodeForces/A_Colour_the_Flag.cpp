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
#define fa(x, a) for (auto &x : a)
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
    int n, m;
    cin >> n >> m;
    char a[n][m], b[n][m], c[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            b[i][j] = c[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == '.')
            {
                if (i % 2 == 0)
                    j % 2 == 0 ? b[i][j] = 'W' : b[i][j] = 'R';
                else
                    j % 2 == 0 ? b[i][j] = 'R' : b[i][j] = 'W';
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (c[i][j] == '.')
            {
                if (i % 2 == 0)
                    j % 2 == 0 ? c[i][j] = 'R' : c[i][j] = 'W';
                else
                    j % 2 == 0 ? c[i][j] = 'W' : c[i][j] = 'R';
            }
        }
    }
    bool cb = true, cc = true;
    if (n == 1 || m == 1)
    {
        if (n == 1)
        {
            for (int i = 0; i < m - 1; i++)
            {
                if (b[0][i] == b[0][i + 1])
                    cb = false;
                if (c[0][i] == c[0][i + 1])
                    cc = false;
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (b[i][0] == b[i + 1][0])
                    cb = false;
                if (c[i][0] == c[i + 1][0])
                    cc = false;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (b[i][j] == b[i][j + 1] || b[i][j] == b[i + 1][j])
                cb = false;
            if (c[i][j] == c[i][j + 1] || c[i][j] == c[i + 1][j])
                cc = false;
        }
    }
    if (cb == true)
    {
        yes nl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << b[i][j];
            cout nl;
        }
    }
    else if (cc == true)
    {
        yes nl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << c[i][j];
            cout nl;
        }
    }
    else
        no nl;
}
signed main()
{
    fast_in_out();
    int u = 1;
    cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}