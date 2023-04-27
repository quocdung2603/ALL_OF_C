#include<bits/stdc++.h>
using namespace std;

void nhap(int n, int **q)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>*(*(q+i)+j);
}
void xuat(int n, int **q)
{
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<n;j++)
			cout<<*(*(q+i)+j)<<" ";
	}
}

void chinh(int n, int **q)
{	int s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>j)
				s +=*(*(q+i)+j);
		}
		for(int j=0;j<n;j++)
		{
			if(i>n-j-1)
				s +=*(*(q+i)+j);
		}
	}
	cout<<endl<<"Tong tam giac duoi la : "<<s;
}
void huymang(int n, int **q)
{
	for(int i=0;i<n;i++)
		delete [] q[i];
	delete [] q;
}
int main()
{
	int n;
	cin>>n;
	int **q = new int* [10000];
	for(int i=0;i<10000;i++)
		*(q+i) = new int [10000];
	nhap(n,q);
	xuat(n,q);
	chinh(n,q);
	huymang(n,q);
	
}
