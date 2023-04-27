#include<bits/stdc++.h>
using namespace std;

struct PHANSO{
	int tu1;
	int mau1;
	int tu2;
	int mau2;
};

void nhap(PHANSO &a)
{
	cout<<"Nhap tu ps1: ";
	cin>>a.tu1;
	cout<<endl;
	cout<<"Nhap mau ps1: ";
	cin>>a.mau1;
	cout<<"\nNhap tu ps2: ";
	cin>>a.tu2;
	cout<<"\nNhap mau ps2: ";
	cin>>a.mau2;
}

void xuat(PHANSO a)
{
	cout<<"Phan so 1: "<<a.tu1<<"/"<<a.mau1<<endl;
	cout<<"Phan so 2: "<<a.tu2<<"/"<<a.mau2<<endl;
}

int ucln(int z, int x)	//tu,mau
{
	while(z!=x)
	{
		if(z>x)
		{
			z -= x;
		}
		else if(z<x)
		{
			x -= z;
		}
	}
	return z;
}

void rut_gon(PHANSO &a)
{
	int c = ucln(a.tu1,a.mau1);
	a.tu1 /= c;
	a.mau1 /= c;
	cout<<"Toi gian ps1: "<<a.tu1<<"/"<<a.mau1<<endl;
	int v = ucln(a.tu2,a.mau2);
	a.tu2 /= v;
	a.mau2 /= v;
	cout<<"Toi gian ps2: "<<a.tu2<<"/"<<a.mau2<<endl;
}

float phep_cong(PHANSO a)
{
	int tu = a.tu1*a.mau2+a.tu2*a.mau1;
	int mau = a.mau1*a.mau2;
	return (float)tu/mau;
}

float phep_tru(PHANSO a)
{
	int tu = a.tu1*a.mau2-a.tu2*a.mau1;
	int mau = a.mau1*a.mau2;
	return (float)tu/mau;
}

float phep_nhan(PHANSO a)
{
	int tu = a.tu1*a.tu2;
	int mau = a.mau1*a.mau2;
	return (float)tu/mau;	
}

float phep_chia(PHANSO a)
{
	int tu = a.tu1*a.mau2;
	int mau = a.mau1*a.tu2;
	return (float)tu/mau;	
}

void quy_dong(PHANSO a)
{
	float ps1, ps2;
	cout<<"Quy dong ps1: ";
	ps1 = (float)(a.tu1*a.mau2)/(a.mau1*a.mau2);
	cout<<ps1;
	cout<<"\nQuy dong ps2: ";
	ps2 = (float)(a.tu2*a.mau1)/(a.mau1*a.mau2);
	cout<<ps2;
}

void so_sanh_ps(PHANSO a)
{
	float ps1, ps2;
	ps1 = (float)(a.tu1*a.mau2)/(a.mau1*a.mau2);
	ps2 = (float)(a.tu2*a.mau1)/(a.mau1*a.mau2);
	if(ps1>ps2)
	{
		cout<<"Phan so 1 lon hon phan so 2: ";
		cout<<a.tu1<<"/"<<a.mau1<<">"<<a.tu2<<"/"<<a.mau2;
	}
	else if(ps1<ps2)
	{
		cout<<"Phan so 1 be hon phan so 2: ";
		cout<<a.tu1<<"/"<<a.mau1<<"<"<<a.tu2<<"/"<<a.mau2;
	}
	else
	{
		cout<<"Hai phan so bang nhau: ";
		cout<<a.tu1<<"/"<<a.mau1<<"="<<a.tu2<<"/"<<a.mau2;
	}
}

int main()
{
	PHANSO a;
	int z, x;
	nhap(a);
	cout<<"========================================================================================================\n";
	xuat(a);
	cout<<endl;
	rut_gon(a);
	cout<<"\nCong phan so: ";
	cout<<phep_cong(a);
	cout<<"\nTru phan so: ";
	cout<<phep_tru(a);
	cout<<"\nNhan phan so: ";
	cout<<phep_nhan(a);
	cout<<"\nChia phan so: ";
	cout<<phep_chia(a)<<endl<<endl;
	quy_dong(a);
	cout<<endl<<endl;
	so_sanh_ps(a);
	return 0;
}
