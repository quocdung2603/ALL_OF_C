#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct HOPSUA{
	string nhan_hieu;
	float trong_luong;
	int month;
	int year;
	int day;
};

HOPSUA nhap()
{
	HOPSUA h;
	cout<<"Nhap nhan hieu: ";
	fflush(stdin);
	getline(cin,h.nhan_hieu);
	cout<<"Nhap trong luong: ";
	cin>>h.trong_luong;
	cout<<"Nhap han su dung: \n";
//	cout<<"Ngay: "; cin>>h.day;
	cout<<"Thang: "; cin>>h.month;
	cout<<"Nam: "; cin>>h.year;
	cout<<endl;
	return h;
}

void nhap1(vector<HOPSUA> &hs)
{
	int n;
	cout<<"Nhap so luong hop sua: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		HOPSUA h = nhap();
		hs.push_back(h);
	}
}

void ktra_nam(vector<HOPSUA> hs)
{
	int dem=0;
	for(int i=0;i<hs.size();i++)
	{
		if(hs[i].year<2003)
			dem++;
	}
	cout<<dem;
}

void hopsuanew(vector<HOPSUA> hs)
{
	int thang=0, nam=0;
	for(int i=0;i<hs.size();i++)
	{
		if(nam<hs[i].year)
		{
			nam = hs[i].year;
		}
	}
	for(int i=0;i<hs.size();i++)
	{
		if(nam==hs[i].year)
		{
			if(thang<hs[i].month)
				thang = hs[i].month;
		}
	}
	cout<<"Hop sua moi nhat: "<<thang<<"/"<<nam;
}

void xuat_hsd(HOPSUA a)
{
	cout<<a.nhan_hieu<<" hsd: "<<a.month<<"/"<<a.year<<endl;
}

void xep_day(vector<HOPSUA> hs)
{
	HOPSUA xepyear;
	for(int i=0;i<hs.size()-1;i++)
	{
		for(int j=i+1;j<hs.size();j++)
		{
			if(hs[i].year<hs[j].year)
			{
				xepyear = hs[i];
				hs[i] = hs[j];
				hs[j] = xepyear;
			}
		}
	}
	HOPSUA xepmonth;
	for(int i=0;i<hs.size()-1;i++)
	{
		for(int j=i+1;j<hs.size();j++)
		{
			if(hs[i].month<hs[j].month)
			{
				xepmonth = hs[i];
				hs[i] = hs[j];
				hs[j] = xepmonth;
			}
		}
	}
	for(int i=0;i<hs.size();i++)
	{
		xuat_hsd(hs[i]);
	}
}

int main()
{
	vector<HOPSUA> hs;
	nhap1(hs);
	cout<<"So luong hop sua san xuat truoc nam 2003: ";
	ktra_nam(hs);
	cout<<endl;
	hopsuanew(hs);
	cout<<endl;
	xep_day(hs);
}
