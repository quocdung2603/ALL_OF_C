#include <iostream>
#include <vector>
#include <math.h>
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

void ktra(vector<int> a)
{
	int dem=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=a[a.size()-1-i])
		{
			dem++;
		}
	}
	if(dem==0)
		cout<<"mang doi xung ";
	else
		cout<<"khong phai mang doi xung";
}
void value_max(vector<int> a)
{	int i;
	cout<<endl;
	int count1=0;
	for( i=0;i<a.size();i++)
	{
		int count=0;
		for(int j=0;j<a.size();j++)
		{
			if(a[i]==a[j])
				count++;
		}
		count1=max(count,count1);
	}
	cout<<count1;
}
int main()
{
	vector<int> a;
	nhap(a);
//	xuat(a);
	ktra(a);
	value_max(a);
}
