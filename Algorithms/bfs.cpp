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
vector<int> parent(maxN);
// void bfs(int u)  //duong di ngan nhat
// {
//     queue<int> q;
//     q.push(u);
//     visited[u]=true;
//     while(!q.empty())
//     {
//         int v = q.front();
//         q.pop();
//         //cout<<v<<" ";
//         for(auto x: a[v])
//         {
//             if(!visited[x])
//             {
//                 q.push(x);
//                 visited[x]=true;
//                 parent[x]=v;
//             }
//         }
//     }
// }

// vector<vector<char>> a(maxN,vector<char>(maxN));
// vector<vector<bool>> visited(maxN, vector<bool>(maxN));
// vector<vector<int>> d(maxN,vector<int>(maxN));
// void bfs(int i,int j)   
// {
//     queue<pair<int,int>> q;
//     q.push({i,j});
//     visited[i][j]=true;
//     while(!q.empty())
//     {
//         pair<int,int> top = q.front();
//         q.pop();
//         for(int k=0;k<4;k++)
//         {
//             int i1 = top.fi + dx[k];
//             int j1 = top.se + dy[k];
//             if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='x' && !visited[i1][j1])
//             {
//                 q.push({i1,j1});
//                 visited[i1][j1]=true;
//             }
//         }       
//     }
// }

// void bfs(int i,int j)  //Tim duong di ngan nhat tu A -> B
// {
//     queue<pair<int,int>> q;
//     q.push({i,j});
//     visited[i][j]=true;
//     d[i][j]=0;
//     while(!q.empty())
//     {
//         pair<int,int> top = q.front();
//         q.pop();
//         for(int k=0;k<4;k++)
//         {
//             int i1 = top.fi + dx[k];
//             int j1 = top.se + dy[k];
//             if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]!='x' && !visited[i1][j1])
//             {
//                 //cout<<i1<<" "<<j1 nl;
//                 d[i1][j1]=d[top.first][top.second]+1;
//                 if(a[i1][j1]=='B') return;
//                 q.push({i1,j1});
//                 visited[i1][j1]=true;
//             }
//         }       
//     }
// }

bool bfs(int u) 
{
    queue<int>q;
    q.push(u);
    visited[u]=true;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(auto x: a[v])
        {
            if(!visited[x])
            {
                parent[x]=v;
                visited[x]=true;
                q.push(x);
            }
            else if(x!=parent[v])
            {
                st=v;
                en=u;
                return true;
            }
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
    // bfs(1);
    
    // dem so thanh phan lien thong
    // int cnt=0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(!visited[i]) 
    //     {
    //         cnt++;
    //         bfs(i);
    //     }
    // }
    // cout<<cnt;

    //Tim duong di ngan nhat tu s->t
    // int s,t; cin>>s>>t;
    // bfs(s);
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
    
    //bfs tim duong di tu s->t
    // int s,t,u,v;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cin>>a[i][j];
    //         if(a[i][j]=='A') s=i,t=j;
    //         else if(a[i][j]=='B') u=i,v=j;
    //     }
    // }
    //kiem tra co duong di tu s->t;
    // bfs(s,t);
    // if(!d[u][v]) cout<<"NO";
    // else cout<<d[u][v];

    // dem so thanh phan lien thong cua do thi
    // int cnt=0;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++) 
    //     {
    //         if(a[i][j]=='x' && !visited[i][j])
    //         {
    //             bfs(i,j);
    //             cnt++;
    //         }
    //     }
    // }
    // cout<<cnt;

    // if(bfs(s,t)) yes;
    // else no;

    //kiem tra tinh chu trinh
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        a[x].pb(y);
        a[y].pb(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            if(bfs(i))
            {
                cout<<"yes" nl;
                return;
            }
        }
    }
    cout<<"no";
    

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
