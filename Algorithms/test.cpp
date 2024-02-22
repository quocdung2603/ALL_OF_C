#include<bits/stdc++.h>
using namespace std;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
vector<bool> vis(1001);
vector<int> a[1001];
vector<int> parent(1001);
int n,m,cnt=0,st,en;
/*BFS basic*/
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    vis[u]=true;
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        vis[t]=true;
        cout<<t<<" ";
        for(auto v: a[t])
        {
            if(!vis[v])
            {
                q.push(v);
                parent[v]=t;
                vis[v]=true;
            }
        }
    }
}

/*Bfs - kiểm tra tính chu trình*/
// bool bfs(int u)
// {
//     queue<int> q;
//     q.push(u);
//     vis[u]=true;
//     while(!q.empty())
//     {
//         int t = q.front();
//         q.pop();
//         for(auto v: a[t])
//         {
//             if(!vis[v])
//             {
//                 q.push(v);
//                 vis[v]=true;
//                 parent[v]=t;
//             }
//             else if(v!=parent[t])
//             {
//                 st = v;
//                 en = u;
//                 return true;
//             }
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
    bfs(2);
    /*BFS - Kiểm tra liên thông, đếm thành phần liên thông*/
    // cnt=0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(!vis[i])
    //     {
    //         cnt++;
    //         cout<<"Thành phần liên thông thứ "<<i<<": ";
    //         bfs(i);
    //     }
    // }
    
    /*Bfs - kiểm tra, tìm đường đi*/
    // cin>>st>>en;
    // parent[st]=0;
    // bfs(st);
    // if(vis[en]==true)
    // {
    //     cout<<"Tìm được đường đi từ "<<st<<" đến "<<en<<": ";
    //     vector<int> path;
    //     while(st!=en)
    //     {
    //         path.push_back(en);
    //         en = parent[en];
    //     }   
    //     path.push_back(st);
    //     reverse(path.begin(), path.end());
    //     for(auto x: path) cout<<x<<" ";
    // }   
    // else 
    // {
    //     cout<<"Không tìm được đường đi từ "<<st<<" đến "<<en;
    // }

    /*Bfs - kiểm tra chu trình, in ra chu trình*/
    // int i =1;
    // parent[i]=0;
    // if(bfs(i)==true)
    // {
    //     cout<<"Có chu trình xuất phát từ đỉnh "<<i<<": ";
    //     vector<int> path;
    //     while(st!=en)
    //     {
    //         path.push_back(en);
    //         en = parent[en];
    //     }   
    //     path.push_back(st);
    //     reverse(path.begin(), path.end());
    //     for(auto x: path) cout<<x<<" ";
    // }
    // else 
    // {
    //     cout<<"Không có chu trình xuất phát từ đỉnh "<<i;
    // }
    return 0;
}