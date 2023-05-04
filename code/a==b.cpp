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
void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

void solve()
{
    int n,x,y; cin>>n;
    if(n%2==0)
    {
        cout<<-1 nl;
        return;
    }
    queue<int>a,b;
    vi ans;
    a.push(1);
    int i=1;
    while(true)
    {
        if(i%2!=0)
        {
            while(!a.empty())
            {
                x=a.front()*2 - 1;
                ans.bb(1);
                y=a.front()*2 + 1;
                ans.bb(2);
                b.push(x);
                b.push(y);
                a.pop();
                if(x==n || y==n)
                {
                    cout<<i nl;
                    return;
                }
            }
        }
        else 
        {
            while(!b.empty())
            {
                x=b.front()*2 - 1;
                ans.bb(1);
                y=b.front()*2 + 1;
                ans.bb(2);
                a.push(x);
                a.push(y);
                b.pop();
                if(x==n || y==n )
                {
                    cout<<i nl;
                    return;
                }
            }
        }
        i++;
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
