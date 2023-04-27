#include<bits/stdc++.h>
using namespace std;

void nhap(int **q, int n, int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>*(*(q+i)+j);
}

void xuat(int **q, int n, int m)
{
	for(int i=0;i<n;i++)
	{	cout<<endl;
		for(int j=0;j<m;j++)
			cout<<*(*(q+i)+j)<<" ";
	}
}

int main()
{	
	int n,m;
	cin>>n>>m;

	int **q = new int* [n];
	for(int i=0;i<n*m;i++)
		*(q+i) = new int [m];
	nhap(q,n,m);
	xuat(q,n,m);	
}
