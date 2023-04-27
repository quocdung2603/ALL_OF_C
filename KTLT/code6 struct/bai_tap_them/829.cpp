#include<bits/stdc++.h>
using namespace std;

struct TINH{
	string ten_tinh;
	float dien_tich;
	int dan_so;
};

TINH nhap()
{
	TINH a;
	cout<<"Nhap ten tinh: ";
	fflush(stdin);
	getline(cin,a.ten_tinh);
	cout<<"Nhap dien tich: ";
	cin>>a.dien_tich;
	cout<<"Nhap dan so: ";
	cin>>a.dan_so;
	cout<<endl;
	return a;
}

void nhap1(vector<TINH> &tp)
{
	int n;
	cout<<"Nhap so tinh thanh: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		TINH a = nhap();
		tp.push_back(a);
	}
}

void tong_s(vector<TINH> tp)
{
	int sum=0;
	for(int i=0;i<tp.size();i++)
	{
		sum += tp[i].dien_tich;
	}
	cout<<"Tong dien tich: "<<sum;
}

void tinh_max(vector<TINH> tp)
{
	float max=0;
	for(int i=0;i<tp.size();i++)
	{
		if(max<tp[i].dien_tich)
		{
			max = tp[i].dien_tich;
		}
	}
	cout<<"Tinh co dien tich lon nhat la"<<max;
}

void dan_max(vector<TINH> tp)
{
	float max=0;
	for(int i=0;i<tp.size();i++)
	{
		if(max<tp[i].dan_so)
		{
			max = tp[i].dan_so;
		}
	}
	for(int i=0;i<tp.size();i++)
	{
		if(max==tp[i].dan_so)
		{
			cout<<"Tinh co dan so lon nhat: "<<tp[i].ten_tinh;
		}
	}
}

void xep_tinh(TINH h)
{
	cout<<"Ten tinh: "<<h.ten_tinh<<endl;
	cout<<"Dien tich "<<h.dien_tich<<endl;
}

void tang_dan_dien_tich(vector<TINH> tp)
{
	TINH temp;
	for(int i=0;i<tp.size()-1;i++)
	{
		for(int j=i+1;j<tp.size();j++)
		{
			if(tp[i].dien_tich>tp[j].dien_tich)
			{
				temp = tp[i];
				tp[i] = tp[j];
				tp[j] = temp;
			}
		}
	}
	for(int i=0;i<tp.size();i++)
	{
		xep_tinh(tp[i]);
		cout<<endl;
	}
}

int main()
{
	vector<TINH> tp;
	nhap1(tp);
	cout<<"\n================================================================"<<endl;
	tong_s(tp);
	cout<<endl;
	tinh_max(tp);
	cout<<endl;
	dan_max(tp);
	tang_dan_dien_tich(tp);
}
