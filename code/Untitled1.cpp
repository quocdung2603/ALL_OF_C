#include <bits/stdc++.h>

using namespace std;
void solve()
{
    if("kiet" > "thang") return 1;
    return 0;
}
struct sinhvien
{
    string mssv, ht;
    double dgk, dck;
};
// cau a
void nhap(int n, vector<sinhvien> &a)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap sinh vien thu " << i + 1 << ": \n";
        cout << "Nhap ma so sinh vien: ";
        cin >> a[i].mssv;
        cin.ignore();
        cout << "Nhap ho va ten: ";
        getline(cin, a[i].ht);
        cout << "Nhap diem giua ky: ";
        cin >> a[i].dgk;
        cout << "Nhap diem cuoi ky: ";
        cin >> a[i].dck;
    }
}
// cau b
void demSoLuongSinhVienHocLai(int n, vector<sinhvien> a)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i].dgk + a[i].dck) / 2 < 5)
        {
            cnt++;
        }
    }
    cout << "So luong sinh vien hoc lai la: " << cnt << endl;
}
// cau c
void inDanhSachSinhVienTenLaTieu(int n, vector<sinhvien> a)
{
    for (int i = 0; i < n; i++)
    {
        string tmp=a[i].ht.substr(a[i].ht.size()-5, a[i].ht.size()-1);
        cout<<tmp <<endl;
        if(tmp==" Tieu")
        {
            cout<<a[i].ht;
        }
    }
}
int main()
{
    // int n;
    // cout<<"Nhap so luong sinh vien: ";
    // cin >> n;
    // vector<sinhvien> a(n);
    // nhap(n,a);
    // inDanhSachSinhVienTenLaTieu(n,a);
    cout<<solve();
    return 0;
}