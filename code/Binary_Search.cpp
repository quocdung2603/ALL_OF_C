#include <bits/stdc++.h>
using namespace std;
// tt
void binary_search1(int a[], int l,int r,int x)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        cout<<mid<<" ";
        if(a[mid]==x)
        {
            return;
        }
        else if(a[mid] > x)
        {
            r=mid-1;
        }
        else 
            l=mid+1;
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    // cout<<binary_search1(a,1,n,13)<<endl;
    int x;cin>>x;

    return 0;
}