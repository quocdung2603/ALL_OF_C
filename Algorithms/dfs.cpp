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
const int maxN = 1e4 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

int n,m,st,en;
vi a[maxN];
vector<bool> visited(maxN);
vector<int> parent(maxN); // mang chua father cua dinh dc tham

// void dfs(int u) 
// {
//     visited[u]=true;
//     //cout<<u<<" ";
//     for(auto v: a[u])
//     {
//         if(!visited[v])
//         {
//             parent[v]=u;
//             dfs(v);
//         }
//     }
// }

// vector<vector<char>> a(maxN,vector<char>(maxN));
// vector<vector<bool>> visited(maxN, vector<bool>(maxN));
// void dfs(int i,int j)  
// {
//     visited[i][j]=true;
//     for(int k=0;k<4;k++)
//     {
//         int i1=i+dx[k];
//         int j1=j+dy[k];
//         if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='x' && !visited[i1][j1])
//         {
//             dfs(i1,j1);
//         }
//     }
// }

// bool dfs(int i,int j)  
// {
//     cout<<i<<" "<<j nl;
//     visited[i][j]=true;
//     if(a[i][j]=='B') return true;
//     for(int k=0;k<4;k++)
//     {
//         int i1=i+dx[k];
//         int j1=j+dy[k];
//         if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]!='x' && !visited[i1][j1])
//         {
//             if(dfs(i1,j1))  return true;
//         }
//     }
//     return false;
// }

bool dfs(int u) //kiem tra tinh chu trình
{
    visited[u]=true;
    for(auto &v: a[u])
    {
        if(!visited[v])
        {
            parent[v]=u;
            if(dfs(v)) return true;
        }
        else if(v!=parent[u]) 
        {
            st=v;en=u;
            return true;
        }
    }
    return false;
}
void solve()
{
    cin>>n>>m;
    // for(int i=0;i<m;i++)
    // {
    //     int x,y; cin>>x>>y;
    //     a[x].pb(y);
    //     a[y].pb(x);
    // }
    // dfs(1) //duyet tu dinh 1

    // dem so thanh phan lien thong tren ds canh
    // int cnt=0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(!visited[i]) 
    //     {
    //         cnt++;
    //         dfs(i);
    //     }
    // }
    // cout<<cnt;

    //Tim duong di tu s->t
    // int s,t; cin>>s>>t;
    // dfs(s); // duyet tu dinh s
    // parent[s]=0;
    // if(!visited[t])
    // {
    //     cout<<"Khong co duong di";
    // }
    // else 
    // {
    //     vi ans;
    //     while(t!=s)
    //     {
    //         ans.pb(t);
    //         t=parent[t];
    //     }
    //     ans.pb(s);
    //     reverse(all(ans));
    //     fa(x,ans) cout<<x<<" ";
    // }

    //dfs tren ma tran 
    // int cnt=0,s,t;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cin>>a[i][j];
    //         if(a[i][j]=='A') s=i,t=j;
    //     }
    // }

    // dem so thanh phan lien thong tren ma tran
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         if(a[i][j]=='x' && !visited[i][j])
    //         {
    //             dfs(i,j);
    //             cnt++;
    //         }
    //     }
    // }
    // cout<<cnt;

    // kiem tra duong di tu s->t:
    // if(dfs(s,t)) yes;
    // else no;

    //kiem tra tinh chu trinh cua do thi vo huong
    //=> kiem tra canh nguoc(chi dung khi do thi lien thong)
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    } 
    //neu do thi da lien thong
    // if(dfs(1,0)) cout<<"yes";
    // else cout<<"No";
    //neu do thi chua lien thong
    for(int i=0;i<=0;i++)
    {
        if(!visited[i])
        {
            if(dfs(i))
            {
                cout<<"Yes" nl;
                vi cycle; // truy vet lai cac dinh tao thanh chu trinh
                cycle.pb(st);
                while(en!=st)
                {
                    cycle.pb(en);
                    en=parent[en];
                }
                cycle.pb(st);
                reverse(all(cycle));
                fa(x,cycle) cout<<x<<" ";
                cout<<endl;
                //return;
            }
        }
    }
    cout<<"No";
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
