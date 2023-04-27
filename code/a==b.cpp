#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int aa,bb,x,y,z,m;cin>>aa>>bb;
    if(aa==bb) 
    {
        cout<<0;
        return;
    }
    queue<int>a,b;
    a.push(aa);
    int i=1;
    while(true)
    {
        if(i%2!=0)
        {
            while(!a.empty())
            {
                x=a.front()*2;
                y=a.front()/3;
                z=a.front()+1;
                m=a.front()*a.front();
                b.push(x);
                b.push(y);
                b.push(z);
                b.push(m);
                a.pop();
                if(x==bb || y==bb|| z==bb || m==bb)
                {
                    cout<<i;
                    return;
                }
            }
        }
        else 
        {
            while(!b.empty())
            {
                x=b.front()*2;
                y=b.front()/3;
                z=b.front()+1;
                m=b.front()*b.front();
                a.push(x);
                a.push(y);
                a.push(z);
                a.push(m);
                b.pop();
                if(x==bb || y==bb || z==bb || m==bb)
                {
                    cout<<i;
                    return;
                }
            }
        }
        i++;
    }
}
int main()
{
    solve();
    return 0;
}