#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e4+6;

//topo,kahn khong duyet duoc do thi co dinh co chu trinh 
// => dung kiem tra tinh chu trinh cua do thi
int n,m;
vector<int> a[maxN];
vector<bool> visited(maxN);
vector<int> topo;
vector<int> in(maxN);
void dfs(int u)
{
    visited[u]=true;
    for(auto v: a[u])
    {
        if(!visited[v])
        {
            dfs(v);
        }
    }
    topo.push_back(u);
}

void kahn() // xoa dan dinh
{
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0) 
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        topo.push_back(u);
        for(auto &v: a[u])
        {
            in[v]--;
            if(in[v]==0)
            {
                q.push(v);
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++) 
    {
        int x,y; cin>>x>>y;
        a[x].push_back(y);
        in[y]++; // kahn 
    }
    // for(int i=1;i<=n;i++)
    // {
    //     if(!visited[i]) 
    //     {
    //         dfs(i);
    //     }
    // }
    // reverse(topo.begin(),topo.end());
    // for(auto x: topo) cout<<x<<" ";
    kahn();
    for(auto x: topo) cout<<x<<" ";
}