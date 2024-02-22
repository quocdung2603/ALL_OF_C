#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<pair<int,int>> adj[10001];
vector<bool> used(10001);

struct edge{
    int x,y,w;
};

void Prim(int u)
{
    vector<edge> MST;
    int d=0;
    used[u]=true;
    while(MST.size() < n-1)
    {
        int min_w = INT_MAX;
        int X,Y; //luu 2 dinh cua canh 
        for(int i=1;i<=n;i++) // tim canh co trong so be nhat
        {
            if(used[i]==true) // dinh da duoc them vao cay khung
            {
                for(auto it : adj[i])
                {
                    int j = it.first, trongso = it.second;
                    if(!used[j] && trongso < min_w)
                    {
                        min_w = trongso;
                        X = j; // V
                        Y = i; // MST
                    }
                }
            }
        }
        MST.push_back({X,Y,min_w});
        d+=min_w;
        used[X]=true; //them dinh X vao cay khung
    }
    cout<<"Do dai min nhat: "<<d<<endl;
    for(auto e: MST)    
    {
        cout<<e.x<<" "<<e.y<<" "<<e.w<<endl;
    }
}
int main(){

    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,w; cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    Prim(1);
    return 0;
}