#include<bits/stdc++.h>
using namespace std;

void nhap(vector<vector<int> >&a, int &n,int &m)
{
	cin>>n>>m;
	a.resize(n);
	for(int i=0;i<n;i++)
	{
		a[i].resize(m);
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
}

int min_dong(vector<vector<int> > a, int n, int m, int y, int z)
{
	int min=a[y][z];
	for(int i=0;i<n;i++)
	{
		if(min>a[y][i])
			return 0;
	}
	return 1;
}

int max_cot(vector<vector<int> > a, int n, int m, int y, int z)
{
	int max=a[y][z];
	for(int j=0;j<m;j++)
	{
		if(max<a[j][z])
			return 0;
	}
	return 1;
}

int max_dong(vector<vector<int> > a, int n, int m, int y, int z)
{
	int max=a[y][z];
	for(int i=0;i<n;i++)
	{
		if(max<a[y][i])
			return 0;
	}
	return 1;
}

int min_cot(vector<vector<int> > a, int n, int m, int y, int z)
{
	int min=a[y][z];
	for(int j=0;j<m;j++)
	{
		if(min>a[j][z])
			return 0;
	}
	return 1;
}

void ktra(vector<vector<int> > a, int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(min_dong(a,n,m,i,j)&&max_cot(a,n,m,i,j)||max_dong(a,n,m,i,j)&&min_cot(a,n,m,i,j))
				cout<<i<<" "<<j;
		}
		cout<<endl;
	}
}

int main()
{
	vector<vector<int> > a;
	int n, m;
	nhap(a,n,m);
	ktra(a,n,m);
}
