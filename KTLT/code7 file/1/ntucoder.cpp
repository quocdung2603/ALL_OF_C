#include<iostream>
#include<fstream>
#include<math.h>
#include<vector>
using namespace std;

int element(int x)		///nguyen to
{
	if(x<2)
		return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int perfect_square(int b)		///so chinh phuong
{
	int i=0;
	while(i*i<=b)
	{
		if(i*i==b)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int perfect_number(int c)
{
	int s=0;
	for(int i=1;i<=c/2;i++)
	{
		if(c%i==0)
		{
			s+=i;
		}
	}
	if(s==c)
		return 1;
	return 0;
}

int main()
{
	int n;
	ifstream songuyen;
	ofstream nguyento, chinhphuong, hoanhao;	//khai bao
	
	songuyen.open("Songuyen.inp", ios_base::in);
	if(songuyen.fail()==true)
	{
		cout<<"Mo file khong thanh cong: ";
		return 0;
	}
	cout<<"Mo file thanh cong: ";
	
	//doc mang 1 chieu trong file songuyen.inp
	nguyento.open("Nguyento.txt",ios_base::out);
	songuyen>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		songuyen>>a[i];
	}
	
	//xuat so nguyen to
	for(int i=0;i<n;i++)
	{
		if(element(a[i])==1)
		{
			nguyento<<a[i]<<" ";
		}
	}
	
	//xuat so chinh phuong
	chinhphuong.open("Chinhphuong.txt",ios_base::out);
	for(int i=0;i<n;i++)
	{
		if(perfect_square(a[i])==1)
		{
			chinhphuong<<a[i]<<" ";
		}
	}
	
	//xuat so hoan hao
	hoanhao.open("Hoanhao.txt",ios_base::out);
	for(int i=0;i<n;i++)
	{
		if(perfect_number(a[i])==1)
			hoanhao<<a[i]<<" ";
	}
	nguyento.close();
	songuyen.close();
	chinhphuong.close();
	hoanhao.close();
	return 0;
}
