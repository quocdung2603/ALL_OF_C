#include<bits/stdc++.h>
using namespace std;

struct HOCSINH{
	string hoten;
	float diem_tin;
	float diem_nn;
	float dtb;
	string xeploai;
};

HOCSINH	ttsv()
{
	HOCSINH a;
	cout<<"\n\n\t\t"<<"THONG TIN SINH VIEN"<<endl;
	cout<<"Nhap ho va ten: ";
	fflush(stdin);
	getline(cin,a.hoten);
	cout<<"Nhap diem tin hoc: ";
	cin>>a.diem_tin;
	cout<<endl;
	cout<<"Nhap diem ngoai ngu: ";
	cin>>a.diem_nn;
	a.dtb = (a.diem_nn+a.diem_tin)/2;
	return a;
}

void nhap(vector<HOCSINH> &hs)
{
	int n;
	do
	{
		cout<<"Nhap so luong: ";
		cin>>n;
		if(n>=31)
		{
			cout<<"Vui long nhap duoi 30 sv thoi be oi!!! "<<endl;
		}
	}
	while(n>=31);
	for(int i=0;i<n;i++)
	{
		HOCSINH a = ttsv();
		hs.push_back(a);
	}
}

float diem_trung_binh(HOCSINH dth, HOCSINH dnn)
{
	float dtb;
	dtb=(dth.diem_tin+dnn.diem_nn)/2;
	return dtb;
}

void xep_loai(float &c)
{
	if(c>=8)
	{
		cout<<"Gioi";
	}
	else if(c>=6&&c<8)
	{
		cout<<"Kha";
	}
	else if(c>=5&&c<6)
	{
		cout<<"T.Binh";
	}
	else if(c<5)
	{
		cout<<"Yeu";
	}
}

void thi_lai(HOCSINH hs)
{
	if(hs.diem_nn<5||hs.diem_tin<5)
	{
		cout<<"Thi lai: "<<hs.hoten;
	}
}

void danh_sach_thi_lai(vector<HOCSINH> hs)
{
	for(int i=0;i<hs.size();i++)
	{
		thi_lai(hs[i]);
		cout<<endl;
	}
}

void xuat(HOCSINH hs)
{
	cout<<"|\t"<<hs.hoten<<"\t";
	cout<<"\t"<<hs.diem_tin<<"\t";
	cout<<"\t"<<hs.diem_nn<<"\t";
}

void xuat1(vector<HOCSINH> hs)
{
	cout<<"==============================================================================================";
	cout<<endl;
	cout<<"|\tHo ten\t\t|"<<"   Diem tin   |"<<"   Diem ngoai ngu   |"<<"   Diem trung binh   |"<<"   Xep loai   |";
	cout<<endl;
	for(int i=0;i<hs.size();i++)
	{
		xuat(hs[i]);
		cout<<"\t";
		cout<<diem_trung_binh(hs[i],hs[i]);
		float diem = diem_trung_binh(hs[i],hs[i]);
		cout<<"\t\t\t";
		xep_loai(diem);
		cout<<endl;
	}
}

void danh_sach_hs_gioi(HOCSINH hs)
{
	cout<<"Hoc sinh gioi: "<<hs.hoten;
}

void hoc_sinh_gioi(vector<HOCSINH> hs)
{
	for(int i=0;i<hs.size();i++)
	{
		float diem = diem_trung_binh(hs[i],hs[i]);
		if(diem>=8)
		{
			danh_sach_hs_gioi(hs[i]);
			cout<<endl;
		}
	}
}

void diem_trung_binh_max(HOCSINH hs)
{
	cout<<"Nhung hoc sinh co diem cao nhat: "<<hs.hoten;
}

void danh_sach_dtb_max(vector<HOCSINH> hs)
{
	float max=0;
	for(int i=0;i<hs.size();i++)
	{
		float diem = diem_trung_binh(hs[i],hs[i]);
		if(max<diem)
		{
			max=diem;
		}
	}
	
	for(int i=0;i<hs.size();i++)
	{
		float diem = diem_trung_binh(hs[i],hs[i]);
		if(max==diem)
		{
			diem_trung_binh_max(hs[i]);
			cout<<endl;
		}
	}
}

//void x_dtb(HOCSINH a)
//{
//	int n;
//	cout<<a.dtb;
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[i].dtb<a[j].dtb)
//			{
//				float temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//
//void xuat_dtb(vector<HOCSINH> hs)
//{
//	for(int i=0;i<hs.size();i++)
//	{
//		x_dtb(hs[i]);
//		cout<<endl;
//	}
//}

int main()
{
	vector<HOCSINH> hs;
	int n;
	nhap(hs);
	cout<<endl;
	xuat1(hs);
	cout<<"=============================================================================================="<<endl;
//	danh_sach_thi_lai(hs);
//	danh_sach_dtb_max(hs);
//	hoc_sinh_gioi(hs);
//	xuat_dtb(hs);
}
