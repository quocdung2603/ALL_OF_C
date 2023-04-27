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

int ktra_so(int n)
{
	int dv;
	while(n>0)
	{
		dv=n%10;
		if(dv%2!=0)
			return 0;
		n /=10;
	}
	return 1;
}
int ktra_so1(int n)
{
	int dv;
	while(n>0)
	{
		dv=n%10;
		if(dv%2==0)
			return 0;
		n /=10;
	}
	return 1;
}
void taikonne(vector<int> a)
{
	int dem=0,dem1=0;
	for(int i=0;i<a.size();i++)
	{
		if(ktra_so(a[i])==1)
			dem++;
		if(ktra_so1(a[i])==1)
			dem1++;
	}
	cout<<"co tong : "<<dem<<" so toan chan"<<endl;
	cout<<"co tong : "<<dem1<<" so toan le"<<endl;
}
int main()
{
	vector<int> a;
	nhap(a);
//	xuat(a);
	taikonne(a);
}
