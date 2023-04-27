#include<bits/stdc++.h>
using namespace std;

struct HOCSINH{
	int mssv;
	string ho_ten;
	float diem_gk;
	float diem_ck;
	float diem_hp;
};

HOCSINH nhap_1_hs()
{
	HOCSINH h;
	cout<<"Nhap mssv: ";
	cin>>h.mssv;
	cout<<"Nhap ho ten: ";
	fflush(stdin);
	getline(cin,h.ho_ten);
	fflush(stdin);
	cout<<"Diem GK: ";
	cin>>h.diem_gk;
	cout<<"Diem CK: ";
	cin>>h.diem_ck;
	h.diem_hp = (h.diem_gk/2)+(h.diem_ck/2);
	return h;
}

void nhap_n_sv(vector<HOCSINH> &hs)
{
	int n;
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		HOCSINH h = nhap_1_hs();
		hs.push_back(h);
	}
}

void xuat_tt_sv(vector<HOCSINH> hs, ofstream &f)
{
	for(int i=0;i<hs.size();i++)
	{
		f<<hs[i].ho_ten<<","<<hs[i].mssv<<","<<hs[i].diem_gk<<","<<hs[i].diem_ck<<endl;
	}
}

void sap_xep(vector<HOCSINH> hs, ofstream &diem)
{
	for(int i=0;i<hs.size()-1;i++)
	{
		for(int j=i+1;j<hs.size();j++)
		{
			if(hs[i].diem_hp<hs[j].diem_hp)
			{
				HOCSINH temp = hs[i];
				hs[i] = hs[j];
				hs[j] = temp;
			}
		}
	}
	
	for(int i=0;i<hs.size();i++)
	{
		diem<<hs[i].ho_ten<<","<<hs[i].mssv<<","<<hs[i].diem_gk<<","<<hs[i].diem_ck<<endl;
	}
}

int main()
{
	vector<HOCSINH> hs;
	ofstream f, ketqua, diem;
	f.open("SinhVien.DAT", ios::out);
	ketqua.open("DiemHP.DAT", ios::out);
	diem.open("KetQua.DAT", ios::out);
	
	if(f.fail()==true)
	{
		cout<<"Mo file khong thanh cong: ";
		return 0;
	}
	nhap_n_sv(hs);
	xuat_tt_sv(hs,f);
	sap_xep(hs,diem);
	
	f.close();
	ketqua.close();
	diem.close();
	return 0;
}
