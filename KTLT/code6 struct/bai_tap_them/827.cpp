#include<bits/stdc++.h>
using namespace std;

struct PHONG{
	string ma_phong;
	string ten_phong;
	float don_gia;
	int so_giuong;
	int trinh_trang;
};

PHONG nhapphong()
{
	PHONG h;
	cout<<"\nNhap ma phong: ";
	fflush(stdin);
	getline(cin,h.ma_phong);
	cout<<"Nhap ten phong: ";
	fflush(stdin);
	getline(cin,h.ten_phong);
	cout<<"Don gia cua phong: ";
	cin>>h.don_gia;
	cout<<"So luong giuong: ";
	cin>>h.so_giuong;
	cout<<"Trinh trang phong: ";
	int n;
	do
	{
		cout<<"\nTrinh trang ranh(0), ban(1): ";
		cin>>n;
		h.trinh_trang = n;
		if(n<0||n>1)
			cout<<"Vui long nhap lai trinh trang di be oi!!!!: "<<endl;
		else if(n==0)
			cout<<"Phong Ranh!!!"<<endl;
		else if(n==1)
			cout<<"Phong Ban!!!"<<endl;
	}
	while(n<0||n>1);
	return h;
}

void nhap(vector<PHONG> &a)
{
	int z;
	cout<<"Nhap so luong phong: ";
	cin>>z;
	for(int i=0;i<z;i++)
	{
		PHONG h = nhapphong();
		a.push_back(h);
	}
}

void trinhtrang(PHONG tt)
{
	if(tt.trinh_trang==0)
	{
		cout<<"\nPhong: "<<tt.ten_phong;
	}
}

void ds_phong_trong(vector<PHONG> a)
{
	for(int i=0;i<a.size();i++)
	{
		trinhtrang(a[i]);
	}
}

int tong(PHONG pg)
{
	pg.so_giuong;
	return pg.so_giuong;
}

void tong_giuong(vector<PHONG> a)
{
	int sum=0;
	for(int i=0;i<a.size();i++)
	{
		sum += tong(a[i]);
	}
	cout<<sum;
}

void xep_gia(PHONG h)
{
	cout<<"Ten phong: "<<h.ten_phong<<endl;
	cout<<"Gia: "<<h.don_gia<<endl;
}

void sap_xep(vector<PHONG> a)
{
	PHONG temp;
	for(int i=0;i<a.size()-1;i++)
	{
		for(int j=i+1;j<a.size();j++)
		{
			if(a[i].don_gia>a[j].don_gia)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<a.size();i++)
	{
		xep_gia(a[i]);
		cout<<endl;
	}
}

int main()
{
	vector<PHONG> a;
	nhap(a);
	cout<<"Danh sach phong trong: "<<endl<<endl;
	ds_phong_trong(a);
	cout<<"Tong so giuong hien co: ";
	tong_giuong(a);
	cout<<endl;
	sap_xep(a);
	return 0;
}
