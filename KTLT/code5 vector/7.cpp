#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
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

void tim_k(vector<int> a)
{
	int k;
	cin>>k;
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(a[i]+a[j]==k)
				cout<<a[i]<<" va "<<a[j]<<endl;
		}
	}
}
int main()
{
	vector<int> a;
	nhap(a);
	sort(a.begin(),a.end());
	xuat(a);
	tim_k(a);
}
