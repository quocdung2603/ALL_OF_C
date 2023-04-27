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
#define fa(x, a) for (auto &x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
// tt
// void quick_sort(vector<int>&a, int l, int r)
// {
//     int p=a[(l+r)/2];
//     int i=l,j=r;
//     do
//     {
//         while(a[i]<p) i++;
//         while(a[j]>p) j--;
//         if(i<=j)
//         {
//             swap(a[i],a[j]);
//             i++;
//             j--;
//         }
//     } while (i<=j); 
//     if(l<j) quick_sort(a,l,j);
//     if(i<r) quick_sort(a,i,r);
    
// }
void merge(vector<int>&a ,int l, int m , int r)
{
    int n1=m-l+1;
    int n2=r-m;
    vector<int> L(n1), R(n2);
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int i=0;i<n2;i++) R[i]=a[m+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j]) a[k++] =L[i++];
        else a[k++] = R[j++];
    }
    while (i<n1) a[k++] = L[i++];
    while (j<n2) a[k++] = R[j++];
}
void merge_sort(vector<int>&a , int l,int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void solve()
{
    int n;cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n;j++) cin>>b[j];
    // quick_sort(a,0,n-1);
    // quick_sort(b,0,n-1);
    merge_sort(a,0,n-1);
    merge_sort(b,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout nl;
    for(int i=0;i<n;i++) cout<<b[i]<<" ";
    cout nl;

}
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}