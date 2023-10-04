#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF =1e18;

int n,m,s;
vector<Edge> e[1001];
vector<int> D(1001);
vector<int> trace(1001);
struct Edge
{
    int u,v,w;
};
void bellmanFord(int n, int S, vector<Edge> &e, vector<int> &D, vector<int> &trace) {
    // e: danh sách cạnh
    // n: số đỉnh
    // S: đỉnh bắt đầu
    // D: độ dài đường đi ngắn nhất
    // trace: mảng truy vết đường đi
    // INF nếu không có đường đi
    // -INF nếu có đường đi âm vô tận
    D.resize(n, INF);
    trace.resize(n, -1);

    D[S] = 0;
    for(int T = 1; T < n; T++) {
        for (auto E : e) {
            int u = E.u;
            int v = E.v;
            long long w = E.w;
            if (D[u] != INF && D[v] > D[u] + w) {
                D[v] = D[u] + w;
                trace[v] = u;
            }
        }
    }
}
vector<int> trace_path(vector<int> &trace, int S, int u) {
    if (u != S && trace[u] == -1) return vector<int>(0); // không có đường đi

    vector<int> path;
    while (u != -1) { // truy vết ngược từ u về S
        path.push_back(u);
        u = trace[u];
    }
    reverse(path.begin(), path.end()); // cần reverse vì đường đi lúc này là từ u về S
    
    return path;
}

signed main()
{
    cin>>n>>m>>s;
    for(int i=0;i<m;i++)
    {
        int u,v,w; cin>>u>>v>>w;
        e[u].push_back({v,w});
    }

    return 0;
}