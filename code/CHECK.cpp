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

int caculate(int a, int b, char op) {
  if (op == '+') return a + b;
  if (op == '-') return a - b;
  if (op == '*') return a * b;
  return 0;
}
void solve()
{
    int k=0;
    string s; cin>>s;
    stack<int> num;
    stack<char> ops;
    if(s[0]=='+') 
        k=1;
    if(s[0]=='-')
    {
        int a = s[1]-'0';
        a*=-1;
        num.push(a);
        k=2;
    }
    for(int i=k;i<s.sz;i++) 
    {
        if(s[i] >='0' && s[i] <='9')
        {
            int a=0;
            while(i < s.sz && s[i] >='0' && s[i] <='9')
            {
                a=a*10 + s[i]-'0';
                i++;
            }
            num.push(a);
            i--;
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*')
        {
            while (!ops.empty() && (ops.top() == '*' || ((ops.top() == '+' || ops.top() == '-') && (s[i] == '+' || s[i] == '-'))))
            {
                int b = num.top(); num.pop();
                int a = num.top(); num.pop();
                char op = ops.top(); ops.pop();
                // cout<<a<<" "<<b<<" "<<op nl;
                num.push(caculate(a, b, op));
            }
            ops.push(s[i]);
        }
    }
    while(!ops.empty())
    {
        int b = num.top(); num.pop();
        int a = num.top(); num.pop();
        char op = ops.top(); ops.pop();
        num.push(caculate(a, b, op));
    }
    cout<<num.top() nl;
}   
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    cin.ignore();
    