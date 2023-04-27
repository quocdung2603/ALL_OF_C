#include<bits/stdc++.h>
using namespace std;

void mang_a(vector<int> &a)
{
	int n;
	cout<<"nhap mang a:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
}

void mang_b(vector<int> &b)
{
	int m;
	cout<<"nhap mang b:"<<endl;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int t;
		cin>>t;
		b.push_back(t);
	}
	reverse(b.begin(), b.end());
}

void xuat(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i];
	}
}

int main()
{
	int p,n;
	cout<<"nhap vi tri can chen:";
	cin>>p;
	vector<int> a;
	vector<int> b;
	mang_a(a);
	mang_b(b);
	for(int i=0;i<b.size();i++)
	{
		a.insert(a.begin()+p,b[i]);
	}
	xuat(a);
}
