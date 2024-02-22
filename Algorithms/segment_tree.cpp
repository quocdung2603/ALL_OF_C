#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 1e6;
int st[4*maxN];
int a[maxN];
void build(int id, int l, int r) {
    if (l==r) {
        st[id]=a[l];
        return;
    }
    int m=(l+r)/2;
    //cap nhat nut con
    build(id*2, l, m);
    build(id*2+1, m+1, r);
    //cap nhat nut cha
    st[id]=st[id*2]+st[id*2+1];
}
void update(int id, int l, int r, int i, int v) {
    if (l==r) {
        st[id]=v;
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
    st[id]=st[id*2]+st[id*2+1];
}
int get(int id, int l, int r, int L, int R) {
    if (L>r || l>R) {
        return 0;
    }
    if (l>=L && r<=R) {
        return st[id];
    }
    int m=(l+r)/2;
    int left=get(id*2, l, m, L, R);
    int right=get(id*2+1, m+1, r, L, R);
    return left+right;
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
            cout << get(1, 0, n-1, l, r) << endl;
        }
    }
    return 0;
}

/*
    Cho mảng gồm n phần tử và q truy vấn
    Đối với mỗi truy vấn gồm 2 thao tác:
    1. "1 i v": Cập nhật vị trí i thành giá trị v
    2. "2 l r": In ra tổng các số từ vị trí l, r

    Ví dụ
    5
    1 2 3 2 5
    4
    2 0 2
    1 3 2
    2 1 4
    1 3 4
    Output:
    6
    12
*/