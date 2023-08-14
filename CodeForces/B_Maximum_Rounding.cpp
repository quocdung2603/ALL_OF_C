#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vi vector<int>
#define vec(type,name, sl) vector<type>name(sl)
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define double long double
#define pb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
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
//void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

// int kCn(int k, int n)
// {
//     int result=1;
//     for (int i=n, j=1; j<=k; i--, j++) 
//         result=result*i/j;
//     return result;
// }
// int bin_pow(int a,int b,int mod)
// {
//     if(b==0)return 1;
//     int tmp=bin_pow(a,b/2,mod);
//     if((b&1)==false){
//         return (tmp*tmp)%mod;
//     }
//     return (a*(tmp*tmp)%mod)%mod;
// }
void solve()
{   
    string s,s1; cin>>s;
    s1=s;
    int k=-1;
    for(int i=0;i<s.sz;i++)
    {
        if((s[i]-'0')>=5)
        {
            k=i;
            break;
        }
    }
    if(k==0) 
    {
        cout<<10;
        for(int i=0;i<s.sz-1;i++) cout<<0;
        cout nl;
    }
    else if(k==-1)
    {
        cout<<s nl;
    }
    else 
    {
        int tmp;
        while(true)
        {
            if(k==0) break;
            tmp = (s[k-1]-'0')+1;
            if(tmp>=5)
            {
                k--;
            }
            else break;
        }
        if(k==0) 
        {
            int z = (s[0]-'0')+1;
            cout<<z;
            for(int i=0;i<s.sz-1;i++) cout<<0;
            cout nl;
        }
        else 
        {
            for(int i=0;i<k-1;i++) cout<<s[i];
            cout<<tmp;
            for(int i=k;i<s.sz;i++) cout<<0;
            cout nl;
        }
    }
}

void solve1()
{
    string s; cin>>s;
    s='0'+s;
    reverse(all(s));
    int tmp=0;
    for(int i=0;i<s.sz;i++)
    {
        if(s[i]>='5')
        {
            s[i+1]++;
            for(int j=i;j>=tmp;j--) s[j]='0';
            tmp=i;
        }
    }
    reverse(all(s));
    if(s[0]!='0')
    {
        cout<<s nl;
    }
    else
    {
        for(int i=1;i<s.sz;i++) cout<<s[i];
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
        solve1();
    }
    return 0;
}
