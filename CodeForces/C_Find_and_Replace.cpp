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
#define double long double
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
void file()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/
// 1 kí tự vừa nằm pos chẳn vừa pos lẻ là sai , còn lại đúng
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, vector<int>> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]].bb(i);
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (mp[i].sz != 0)
        {
            // cout<<i <<": ";
            bool c = false, l = false;
            for (int j = 0; j < mp[i].sz; j++)
            {
                // cout << mp[i][j] << " ";
                if(mp[i][j]%2==0)
                {
                    if(l==true)
                    {
                        no nl;
                        return;
                    }
                    c=true;
                }
                else
                {
                    if(c==true)
                    {
                        no nl;
                        return;
                    }
                    l=true;
                }
            }
            // cout nl;
        }
    }
    yes nl;
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
