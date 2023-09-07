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
vector<int> factorize(int n)
{
    vector <int> res;
    for (int i=2; i*i<=n; i++)
	{
        while (n%i==0)
		{
            res.push_back(i);
            n/=i;
        }
    }
    if (n!=1) res.push_back(n);
    return res;
}
void solveA() //Tavas and Nafas
{
	string s;cin>>s;
	if(s.sz==1)
	{
		switch (s[0])
		{
			case '1':{cout<<"one" ; break;}
			case '2':{cout<<"two" ; break;}
			case '3':{cout<<"three" ; break;}
			case '4':{cout<<"four" ; break;}
			case '5':{cout<<"five" ; break;}
			case '6':{cout<<"six" ; break;}
			case '7':{cout<<"seven" ; break;}
			case '8':{cout<<"eight" ; break;}
			case '9':{cout<<"nine" ; break;}	
			case '0':{cout<<"zero" ; break;}	
			// default : break;
		}
	}
	else 
	{
		switch (s[0])
		{
			case '1':
			{
				if(s[1]=='0') cout<<"ten";
				else if(s[1]=='1') cout<<"eleven";
				else if(s[1]=='2') cout<<"twelve";
				else if(s[1]=='3') cout<<"thirteen";
				else if(s[1]=='4') cout<<"fourteen";
				else if(s[1]=='5') cout<<"fifteen";
				else if(s[1]=='6') cout<<"sixteen";
				else if(s[1]=='7') cout<<"seventeen";
				else if(s[1]=='8') cout<<"eighteen";
				else cout<<"nineteen";
				return;
			}
			case '2':{cout<<"twenty" ; break;}
			case '3':{cout<<"thirty" ; break;}
			case '4':{cout<<"forty" ; break;}
			case '5':{cout<<"fifty" ; break;}
			case '6':{cout<<"sixty" ; break;}
			case '7':{cout<<"seventy" ; break;}
			case '8':{cout<<"eighty" ; break;}
			case '9':{cout<<"ninety" ; break;}	
			// default : break;
		}
		switch (s[1])
		{
			case '1':{cout<<"-one" ; break;}
			case '2':{cout<<"-two" ; break;}
			case '3':{cout<<"-three" ; break;}
			case '4':{cout<<"-four" ; break;}
			case '5':{cout<<"-five" ; break;}
			case '6':{cout<<"-six" ; break;}
			case '7':{cout<<"-seven" ; break;}
			case '8':{cout<<"-eight" ; break;}
			case '9':{cout<<"-nine" ; break;}	
			case '0':{cout<<" " ; break;}	
			// default : break;
		}
	}
}
void solveC() //Corners
{
	int n,m; cin>>n>>m;
	vector<vector<char>> a((n+2),vector<char>(m+2));
	int cnt0=0,cnt1=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			a[i][j]=='0' ? cnt0++ : cnt1++;
		}
	}
	if(cnt0==0) cout<<cnt1-2 nl;
	else if(cnt0==n*m) cout<<0 nl;
	else 
	{
		bool ok=false;
		for(int i=0;i<=n+1;i++) a[i][0] = a[i][m + 1] = '?';
		for(int i=0;i<=m+1;i++) a[0][i] = a[n + 1][i] = '?';
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{	
				if(a[i][j]=='0' && (a[i+1][j]=='0' ||a[i-1][j]=='0' ||a[i][j+1]=='0'||a[i][j-1]=='0' ||a[i+1][j+1]=='0' ||a[i-1][j-1]=='0' ||a[i+1][j-1]=='0' ||a[i-1][j+1]=='0'))
				{
					ok=true;
					break;
				}
			}
			if(ok==true) break;
		}
		if(ok==false) cout<<cnt1-1 nl;
		else cout<<cnt1 nl;
	}
}
void solveD()
{
	string s; cin>>s;
	if(s.sz==1) cout<<0 nl;
	else 
	{
		int cnt=0;
		for(int i=1;i<s.sz;i++)
		{
			if(s[i]==s[i-2] || s[i]==s[i-1])
			{
				s[i]='?';
				cnt++;
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
        solveD();
    }
    return 0;
}
