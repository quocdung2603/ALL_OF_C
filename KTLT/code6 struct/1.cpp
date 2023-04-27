#include<bits/stdc++.h>
using namespace std;

struct NGAY
{
	int ngay;
	int thang;
	int nam;
};
struct HOCSINH
{
	string hoten;
	int MSSV;
	float diem_co_so;
	float diem_chuye_nganh;
	NGAY ngaysinh;
};

HOCSINH nhapttsv()
{
	HOCSINH h;
	fflush(stdin); // xoa cache
	cout<<"Nhap thong tin sinh vien: "<<endl<<"Ho va ten SV: ";
	getline(cin,h.hoten);
	cout<<"Ma so sinh vien: ";
	cin>>h.MSSV;
	cout<<"Nhap diem mon chuyen nganh: ";
	cin>>h.diem_chuye_nganh;
	cout<<"Nhap diem mon co so: ";
	cin>>h.diem_co_so;
	cout<<endl;
	cin>>h.ngaysinh.ngay>>h.ngaysinh.thang>>h.ngaysinh.nam;
	return h;
}

void nhap_n_hs(vector<HOCSINH> &hs)
{
	int n;
	cout<<"Nhap so hoc sinh: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		HOCSINH h = nhapttsv();
		hs.push_back(h);
	}
}

void xuat_tths(HOCSINH hs)
{
	cout<<"Ten cua hoc sinh: "<<hs.hoten<<endl;
	cout<<"Ma so sinh vien: "<<hs.MSSV<<endl;
	cout<<"Diem chuyen nganh: "<<hs.diem_chuye_nganh<<endl;
	cout<<"Diem co so: "<<hs.diem_co_so<<endl<<endl;
}

void xuat(vector<HOCSINH> hs)
{
	for(int i=0;i<hs.size();i++)
	{
		xuat_tths(hs[i]);
	}
}

void hs_dau(vector<HOCSINH> hs)
{
	int diem=0;
	for(int i=0;i<hs.size();i++)
	{
		if(hs[i].diem_chuye_nganh>=5&&hs[i].diem_co_so>=5)
		{
			diem++;
		}
	}
	cout<<"So hoc sinh dau: "<<diem<<endl;
}

void liet_ke_hs_thilai(HOCSINH hs)
{

		if(hs.diem_chuye_nganh<5||hs.diem_co_so<5)
		{
			cout<<"Ten hoc sinh thi lai: "<<hs.hoten<<endl;
			if(hs.diem_chuye_nganh<5)
				cout<<"Diem chuyen nganh: "<<hs.diem_chuye_nganh<<endl;
			if(hs.diem_co_so<5)
				cout<<"Diem co so: "<<hs.diem_co_so<<endl;
		}
}

void xuathsthilai(vector<HOCSINH> hs)
{
	for(int i=0;i<hs.size();i++)
	{
		liet_ke_hs_thilai(hs[i]);
	}
}

int main()
{
	vector<HOCSINH> hs;
	nhap_n_hs(hs);
	cout<<"========================================================================================================================"<<endl;
	xuat(hs);
	hs_dau(hs);
	xuathsthilai(hs);
	

}
