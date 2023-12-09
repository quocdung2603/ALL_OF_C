#include <bits/stdc++.h>
using namespace std;
void solve(int a,int b)
{
    int c= a*b;
    int sums=0; // bien tinh tong cac chu so 
    while(c>0)  
    {
        // neu c = 35 => c%=10 = 5  | 
        //c = 144 
        // %10 lan 1: 4 = > c/=10 lần 1 : 14 | sums = 4
        // %10 lan 2: 4 => c/=10 lần 2 : 1 | sums = 8
        // %10 lan 3: 1 => c/=10 lần 2 : 0 | súms = 9
        sums+=c%10;
        c/=10;
    }
    cout<<sums;
}
signed main()
{
    int a,b; cin>>a>>b;
    solve(a,b);
    return 0;
}
