#include<bits/stdc++.h>
using namespace std;

void nhap( vector<vector<int> >&a, int &n,int &m)
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
void sapxep(vector<vector<int> >a, int n, int m)
{
	int k=n*m;
	for(int i=0;i<k-1;i++)
		for(int j=i+1;j<k;j++)
			if(a[i/n][i%n]>a[j/n][j%n])
			{
				int tmp=a[i/n][i%n];
				a[i/n][i%n]=a[j/n][j%n];
				a[j/n][j%n]=tmp;
			}
	n=a.size();
	for(int i=0;i<n;i++)
	{
		m=a[i].size();
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
		else
		{
			for(int j=m-1;j>=0;j--)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
}
int main()
{
	int n,m;
	vector<vector<int> >a;
	nhap(a,n,m);
	sapxep(a,n,m);
	return 0;
}
