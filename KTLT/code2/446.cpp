#include<bits/stdc++.h>
using namespace std;

void nhap(int n, int **q)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>*(*(q+i)+j);
	}
}
void xuat(int n, int **q)
{
	for(int i=0;i<n;i++)
	{	cout<<endl;
		for(int j=0;j<n;j++)
		cout<<*(*(q+i)+j)<<" ";
	}
}

void max_phu(int n, int **q)
{	int i,j;
	int max=*(*(q+0)+n-1);
	for( i=0;i<n;i++)
	{	
		for( j=0;j<n;j++)
		{
			if(i==n-j-1)
			{
				if(max<*(*(q+i)+j))
				{
					max=*(*(q+i)+j);
				}
			}
		}
	}
				cout<<max;
}
int main()
{
	int n;
	cin>>n;
	
	int **q=new int* [1000];
	for(int i=0;i<1000;i++)
		*(q+i) = new int [1000];
	nhap(n,q);
	xuat(n,q);
	max_phu(n,q);
	
}
