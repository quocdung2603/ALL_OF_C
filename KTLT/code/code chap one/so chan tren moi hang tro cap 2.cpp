#include<bits/stdc++.h>
using namespace std;

void nhap(int **q, int &n, int &m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>*(*(q+i)+j);
}

void chan_dong(int **q, int &n, int &m)
{
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{	
			if(*(*(q+i)+j)%2!=0)
			{
				cout<<i<<" ";
				break;
			}
			if(*(*(q+i)+j)%2==0)
				break;
		}
	}
}
int main()
{
	int n, m;
	cin>>n>>m;
	int **q = new int* [1000];
	for(int i=0;i<1000;i++)
		*(q+i) = new int [1000];
	nhap(q,n,m);
	chan_dong(q,n,m);
}
