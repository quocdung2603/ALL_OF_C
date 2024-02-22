#include<bits/stdc++.h>
using namespace std;

vector<bool> vis(1001);
vector<int> a[1001];
vector<int> parent(1001);
// vector<vector<char>> a(maxN,vector<char>(maxN));
// vector<vector<bool>> visited(maxN, vector<bool>(maxN));
int n,m,cnt=0,st,en;
/*Basic Dfs*/
void dfs(int u) // dfs basic
{
    vis[u]=true;
    cout<<u<<" ";
    for(auto v : a[u])
    {
        if(!vis[v])
        {
            parent[v]=u;
            dfs(v);
        }
    }
}

/*Dfs - Kiểm tra tính chu trình*/
// bool dfs(int u)
// {
//     vis[u]=true;
//     for(auto v: a[u])
//     {
//         if(!vis[v])
//         {
//             parent[v]=u;
//             if(dfs(v)==true) return true;
//         }
//         else if(v!=parent[u])
//         {
//             st=v;
//             en=u;
//             return true;
//         }
//     }
//     return false;
// }

/*Dfs trên ma trận*/
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

/*Dfs ma trận - kiểm tra chu trình*/
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
int main()
{   
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(3);
    /*dfs basic, đếm số thành phần liên thông*/
    // for(int i=1;i<=n;i++)
    // {
    //     if(!vis[i])
    //     {
    //         cnt++;
    //         cout<<endl<<"thành phần liên thông "<<cnt<<": ";
    //         dfs(i);
    //     }
    // }

    /*Kiểm tra, Tìm đường đi từ st -> en*/
    // cin>>st>>en;
    // parent[st]=0;
    // dfs(st);
    // if(vis[en])
    // {
    //     cout<<"Tìm được đi từ "<<st<<" tới "<<en<<" la: "<<endl;
    //     vector<int> path;
    //     while(parent[en]!=st)
    //     {
    //         path.push_back(en);
    //         en=parent[en];
    //     }
    //     path.push_back(st);
    //     reverse(path.begin(),path.end());
    //     for(auto x: path) cout<<x<<" ";
    // }
    // else cout<<"Không tìm được đi từ "<<st<<" tới "<<en;

    /*Kiểm tra, tìm chu trình*/
    // int i = 1;
    // if(!vis[i])
    // {
    //     vis.assign(n+1,false);
    //     parent.assign(n+1,0);
    //     if(dfs(i))  
    //     {
    //         cout<<"Chu trình xuất phát từ đỉnh "<<i<<": ";
    //         vector<int> path;
    //         path.push_back(st);
    //         while(en!=parent[en])   
    //         {
    //             path.push_back(en);
    //             en=parent[en];
    //         }
    //         reverse(path.begin(),path.end());
    //         for(auto x: path) cout<<x<<" ";
    //         cout<<endl;
    //     }
    //     else cout<<"Không có chu trình xuất phát từ đỉnh "<<i;
    // }

    return 0;
}