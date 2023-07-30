#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 1e6;
const int mod = 1e9+7;

struct node{
int minvalue,cnt;
};
node st[4*maxN];
int a[maxN];

void build(int id, int l, int r) {
    if (l==r) {
        st[id].minvalue=a[l];
        st[id].cnt=1;
        return;
    }
    int m=(l+r)/2;
    //cap nhat nut con
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    //cap nhat nut cha
    if(st[id*2].minvalue < st[id*2+1].minvalue)
    {
        st[id].minvalue=st[id*2].minvalue;
        st[id].cnt = st[id*2].cnt;
    }
    else if(st[id*2].minvalue > st[id*2+1].minvalue)
    {
        st[id].minvalue=st[id*2+1].minvalue;
        st[id].cnt = st[id*2+1].cnt;
    }
    else 
    {
        st[id].minvalue=st[id*2].minvalue;
        st[id].cnt = st[id*2].cnt + st[id*2+1].cnt;
    }
}
void update(int id, int l, int r, int i, int v) {
    if (l==r) {
        st[id].minvalue=v;
        st[id].cnt=1;
        return;
    }
    int m=(l+r)/2;
    //cap nhat nut con
    if (i<=m) {
        update(2*id, l, m, i, v);
    } else {
        update(2*id+1, m+1, r, i, v);
    }
    //cap nhat nut cha
    if(st[id*2].minvalue < st[id*2+1].minvalue)
    {
        st[id].minvalue=st[id*2].minvalue;
        st[id].cnt = st[id*2].cnt;
    }
    else if(st[id*2].minvalue > st[id*2+1].minvalue)
    {
        st[id].minvalue=st[id*2+1].minvalue;
        st[id].cnt = st[id*2+1].cnt;
    }
    else 
    {
        st[id].minvalue=st[id*2].minvalue;
        st[id].cnt = st[id*2].cnt + st[id*2+1].cnt;
    }
}
node get(int id, int l, int r, int L, int R) {
    if (L>r || l>R) {
        node tmp;
        tmp.minvalue = mod;
        tmp.cnt = mod;
        return tmp;
    }
    if (l>=L && r<=R) {
        return st[id];
    }
    int m=(l+r)/2;
    node left=get(id*2, l, m, L, R);
    node right=get(id*2+1, m+1, r, L, R);
    if(left.minvalue < right.minvalue)
        return left;
    else if(left.minvalue > right.minvalue)
        return right;
    else 
    {
        left.cnt += right.cnt;
        return left;
    }
}
signed main() {
    int n; cin >> n;
    int q; cin >> q;
    for (int i=0; i<n; i++) cin >> a[i];
    build(1, 0, n-1);
    while (q--) {
        int op; cin >> op;
        if (op==1) {
            int i, v; cin >> i >> v;
            update(1, 0, n-1, i, v);
        } else {
            int l, r; cin >> l >> r;
            node ans=get(1, 0, n-1, l, r-1);
            cout << ans.minvalue <<" "<< ans.cnt << endl;
        }
    }
    return 0;
}