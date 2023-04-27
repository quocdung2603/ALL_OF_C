#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct HOCSINH{
	string ho_ten;
	float diem_toan;
	float diem_van;
	float dtb;
};

HOCSINH nhap_basic()
{
	HOCSINH a;
	cout<<"\nHo va ten cua hoc sinh: ";
	fflush(stdin);
	getline(cin,a.ho_ten);
	cout<<"Nhap diem toan: ";
	cin>>a.diem_toan;
	cout<<"Nhap diem van: ";
	cin>>a.diem_van;
	a.dtb=(a.diem_toan+a.diem_van)/2;
	return a;
}

void nhap(vector<HOCSINH> &hs)
{
	int n;
	cout<<"Nhap so luong hoc sinh: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		HOCSINH a = nhap_basic();
		hs.push_back(a);
	}
}

void lk(HOCSINH h)
{
	if(h.diem_toan<5)
	{
		cout<<h.ho_ten<<endl;
	}
}

void ds_hs_td5(vector<HOCSINH> hs)
{
	for(int i=0;i<hs.size();i++)
	{
		lk(hs[i]);
	}
}

int sl_hs_gioi(HOCSINH a)
{
	if(a.diem_toan>=8&&a.diem_van>=8)
	{
		return 1;
	}
	return 0;
}

void slhs_gioi(vector<HOCSINH> hs)
{
	int dem=0;
	for(int i=0;i<hs.size();i++)
	{
		if(sl_hs_gioi(hs[i])==1)
			dem++;
	}
	cout<<dem;
}
void ds_dtb_giam(HOCSINH hs)
{
	cout<<"Ho va ten: "<<hs.ho_ten<<endl;
	cout<<"Diem trung binh: "<<hs.dtb<<endl;
}

void xuat_dtb_giam(vector<HOCSINH> hs)
{
	HOCSINH temp;
	for(int i=0;i<hs.size()-1;i++)
	{
		for(int j=i+1;j<hs.size();j++)
			if(hs[i].dtb<hs[j].dtb)
			{
				temp = hs[i];
				hs[i] = hs[j];
				hs[j] = temp;
			}
	}
	for(int i=0;i<hs.size();i++)
		ds_dtb_giam(hs[i]);
}

int main()
{
	vector<HOCSINH> hs;
	nhap(hs);
	cout<<"==============================================================="<<endl;
	cout<<"Danh sach hoc sinh duoi 5 diem toan: "<<endl;
	ds_hs_td5(hs);
	cout<<"So luong hoc sinh gioi: ";
	slhs_gioi(hs);
	cout<<endl;
	xuat_dtb_giam(hs);
}
