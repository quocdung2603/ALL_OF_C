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
    #define pb push_back
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
        int n; cin>>n;
        int cnt5=0,cnt0=0;
        for(int i=0,x;i<n;i++)
        {
            cin>>x;
            (x==5) ? cnt5++ : cnt0++;
        }
        cnt5 -=(cnt5%9);
        if(cnt0==0) cout<<-1;
        else if(cnt5<=0) cout<<0;
        else 
        {
            for(int i=0;i<cnt5;i++) cout<<5;
            for(int i=0;i<cnt0;i++) cout<<0;
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
