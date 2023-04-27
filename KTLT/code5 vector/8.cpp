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
void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
}
			//   1 2 -9 3 5;
void ktra(vector<int> a)
{
	int sum1=0, sum2=0;
	for(int i=0;i<a.size();i++)
	{
		sum1 += a[i];
		sum2 = max(sum1, sum2);
		if(sum1<0)
			sum1=0;
	}
	cout<<sum2;
}

int main()
{
	vector<int> a;
	nhap(a);
	xuat(a);
	cout<<endl;
	ktra(a);
	cout<<endl;
	in_day_con(a);
}
