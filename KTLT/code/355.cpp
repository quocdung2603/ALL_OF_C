#include<bits/stdc++.h>
using namespace std;

void nhap(int n, int m, int **q)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>*(*(q+i)+j);
}
void xuat(int n, int m, int **q)
{
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<m;j++)
			cout<<*(*(q+i)+j)<<" ";
	}
}

void solick(int n, int m, int **q)
{	
	int j,i;
	for( i=0;i<n;i++)
	{	int ktra=0;
		for( j=0;j<m;j++)
		{
			if(*(*(q+i)+j)>0)
			{
				ktra++;
				break;
			}
		}
		if(ktra==0)
			{
				for( j=0;j<m;j++)
					cout<<*(*(q+i)+j)<<" ";
					cout<<endl;
			}
	}
}
int main()
{
	int n,m;
	int **q = new int* [100];
	for(int i=0;i<100;i++)
		*(q+i) = new int [100];
	cin>>n>>m;
	nhap(n,m,q);
//	xuat(n,m,q);
	solick(n,m,q);
	return 0;
}
