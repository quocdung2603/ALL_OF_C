#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct TOADO{
	float x,y;
	float distance;
};
					
TOADO nhap_toa_do()
{
	TOADO z;
	cout<<"Nhap x: ";
	cin>>z.x;
	cout<<"Nhap y: ";
	cin>>z.y;
	cout<<endl;
	z.distance = sqrt(pow(z.x,2)+pow(z.y,2));
	return z;
}

void nhap(vector<TOADO> &td)
{
	int n;
	cout<<"Nhap so toa do: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		TOADO z = nhap_toa_do();
		td.push_back(z);
	}
}				
//	(x,y)

void xuat(vector<TOADO> td)
{
	for(int i=0;i<td.size();i++)
	{
		cout<<"("<<td[i].x<<","<<td[i].y<<")"<<endl;
	}
}

void ktra(vector<TOADO> td)
{
	for(int i=0;i<td.size();i++)
	{
		if(td[i].x>0&&td[i].y>0)
		{
			cout<<"Toa do nam trong phan tu thu I: "<<"("<<td[i].x<<","<<td[i].y<<")"<<endl;
		}
	}
}

void y_max(vector<TOADO> td)
{
	cout<<"Tung do lon nhat trong toa do: ";
	int max=0;
	for(int i=0;i<td.size();i++)
	{
		if(max<td[i].y)
		{
			max = td[i].y;
		}
	}
	cout<<max;
}

void khoan_cach(TOADO a)
{
	cout<<"("<<a.x<<","<<a.y<<")"<<endl;
}

void sap_xep(vector<TOADO> td)
{
	TOADO temp;
	for(int i=0;i<td.size()-1;i++)
	{
		for(int j=i+1;j<td.size();j++)
		{
			if(td[i].distance<td[j].distance)
			{
				temp = td[i];
				td[i] = td[j];
				td[j] = temp;
			}
		}
	}
	for(int i=0;i<td.size();i++)
	{
		khoan_cach(td[i]);
	}
}

int main()
{
	vector<TOADO> td;
	nhap(td);
	cout<<"===============================================================\n";
	cout<<"Danh sach toa do da nhap: \n";
//	xuat(td);
	ktra(td);
	y_max(td);
	cout<<endl;
	sap_xep(td);
	return 0;
}
