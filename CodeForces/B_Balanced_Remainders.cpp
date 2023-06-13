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
        vi a(n);
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            // cout<<a[i]<<" "<<a[i]%3 nl;
            if(a[i]%3==0) c0++;
            else if(a[i]%3==1) c1++;
            else c2++;
        }
        //cout<<c0 <<" "<<c1<<" "<<c2 nl;
        if(c0 == c1 && c1== c2) cout<<0 nl;
        else 
        {
            int x =(c1+ c2 + c0)/3 , cnt=0,y;
            while(true)
            {
                if(c1== c2 && c1==c0) break;
                if(c0 > x)
                {
                    y= c0-x;
                    c0-=y;
                    c1+=y;
                    cnt+=y;
                }
                if(c1 > x)
                {
                    y= c1-x;
                    c1-=y;
                    c2+=y;
                    cnt+=y;
                }
                if(c2 > x)
                {
                    y=c2-x;
                    c2-=y;
                    c0+=y;
                    cnt+=y;
                }
            }
            cout<<cnt nl;
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
