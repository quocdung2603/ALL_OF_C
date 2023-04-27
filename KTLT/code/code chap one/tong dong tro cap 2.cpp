#include<bits/stdc++.h>
using namespace std;

void nhap(int **q, int &n, int &m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>*(*(q+i)+j);
}

void tong_dong(int **q, int &n, int &m)
{
	for(int i=0;i<n;i++)
	{
		int sum=0;
		cout<<endl;
		for(int j=0;j<m;j++)
		{	
			sum +=*(*(q+i)+j);
		}
		cout<<"dong : "<<i<<" co tong la "<<sum<<" ";
	}
}

int main()
{
	int n, m;
	cin>>n>>m;
	int **q = new int* [100];
	for(int i=0;i<100;i++)
		*(q+i) = new int [100];
	nhap(q,n,m);
	tong_dong(q,n,m);
}
