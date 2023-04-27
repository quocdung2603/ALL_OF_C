#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct NHANVIEN{
	string ho_ten;
	int nam_sinh;
	float lua;
	int sex;
};

NHANVIEN nhap_tt_nhanvien()
{
	NHANVIEN a;
	cout<<"Nhap ho va ten: ";
	fflush(stdin);	
	getline(cin,a.ho_ten);
	//fflush(stdin);
	cout<<endl;
	cout<<"Nhap nam sinh: ";
	cin>>a.nam_sinh;
	cout<<"\nLua cua nhan vien: ";
	cin>>a.lua;
	cout<<"\n";
	int n;
	cout<<"Nhap gioi tinh 1(nam) 0(nu): ";
	do
	{	
		cin>>n;
		a.sex=n;
		if(n<0||n>1)
		{
			cout<<"Vui long chi nhap 1(nam) hoac 0(nu) thoii be oi !!: \n";
		}
		else if(n==1)
		{
			cout<<"Gioi tinh: Nam\n";
		}
		else if(n==0)
		{
			cout<<"Gioi tinh: Nu\n";
		}
	}
	while(n<0||n>1);
	return a;
}
void sol_nhan_vien(vector<NHANVIEN> &nv)
	
	{
		int sl;
		cin>>sl;
		for(int i=0;i<sl;i++)
		{
			NHANVIEN a = nhap_tt_nhanvien();
			nv.push_back(a);
		}
	}

void lietke_40t(NHANVIEN nv)
{
	if((2022-nv.nam_sinh)>40)
	{
		cout<<nv.ho_ten<<endl;
	}
}

void dsnv_40t(vector<NHANVIEN> nv)
{
	for(int i=0;i<nv.size();i++)
	{
		lietke_40t(nv[i]);
	}
}

int dem_sl(NHANVIEN nv)
{
	if(nv.lua>1000000)
	{
		return 1;
	}
	return 0;
}

void ds_luong_tren1tr(vector<NHANVIEN> nv)
{
	int dem=0;
	for(int i=0;i<nv.size();i++)
	{
		if(dem_sl(nv[i])==1)
		{
			dem++;
		}
	}
	cout<<dem;
}

void ds_ns_giam(NHANVIEN nv)
{
	cout<<"Ho va ten: "<<nv.ho_ten<<endl;
	cout<<"Nam sinh: "<<nv.nam_sinh<<endl;
}

void xuat_giam_dan(vector<NHANVIEN> nv)
{
	NHANVIEN temp;
	for(int i=0;i<nv.size()-1;i++)
	{
		for(int j=i+1;j<nv.size();j++)
			if(nv[i].nam_sinh<nv[j].nam_sinh)
			{
				temp = nv[i];
				nv[i] = nv[j];
				nv[j] = temp;
			}
	}
	for(int i=0;i<nv.size();i++)
		ds_ns_giam(nv[i]);
}

int main()
{
	vector<NHANVIEN> nv;
	sol_nhan_vien(nv);
	cout<<"Danh sach sinh vien tren 40 tuoi:\n ";
	dsnv_40t(nv);
	cout<<"So luong nhan vien co tren 1,000,000: ";
	ds_luong_tren1tr(nv);
	xuat_giam_dan(nv);
	return 0;
}
