#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
void nhap(vector<int> &a)
{
	int n;
	cin>>n;
	for ( int i = 0; i < n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
}
void xuat(vector<int> a)
{
	vector<int>::iterator it;
	for ( it = a.begin();it != a.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
void tbduong(vector<int> a)
{
	int dem = 0;
	for ( int i = 0; i < a.size();i++)
	{
		if ( a[i] >= 0)
			dem++;
	}
	double S=0;
	for ( int i = 0; i < a.size();i++)
	{
		if ( a[i] > 0)
			S+=a[i];
	}
	cout<<"trung binh so duong : "<<(double)(S/dem)<<endl;
}
void tbam(vector<int> a)
{
	int dem = 0;
	for ( int i = 0; i < a.size();i++)
	{
		if ( a[i] < 0)
			dem++;
	}
	double S=0;
	for ( int i = 0; i < a.size();i++)
	{
		if ( a[i] < 0)
			S+=a[i];
	}
	cout<<"trung binh so am : "<<(double)(S/dem);
}
int snt(int n)
{
	if(n<2)
		return 0;
	for(int i=2 ; i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
}

void nt(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{
		if(snt(a[i])==1)
		{
			cout<<a[i]<<" ";
		}
	}
}
int main()
{
	vector<int> a;
	nhap(a);
	tbduong(a);
	tbam(a);
	cout<<endl;
	cout<<"so nguyen to la : ";
	nt(a);
	return 0;
}
