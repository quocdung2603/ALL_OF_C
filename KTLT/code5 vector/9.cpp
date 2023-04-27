#include<bits/stdc++.h>
using namespace std;

void nhap(vector<int> &a)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
}
int dem=1;
int dem1=0;
void ktra(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{	
		if(a[i]<a[i+1])
		{
			dem++;
		}
		if(a[i]>=a[i+1])
		{
			dem=1;
		}
		dem1=max(dem1,dem);
	}
	cout<<endl<<"day dai nhat la: "<<dem1;
}

void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
		
	}
}

int main()
{
	vector<int> a;
	nhap(a);
	xuat(a);
//	cout<<endl;
	ktra(a);
}
