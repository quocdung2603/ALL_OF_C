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

void ktra(int n, int **q)
{	int k=n*n;
	for(int i=0;i<k-1;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(*(*(q+i/n)+i%n)<*(*(q+j/n)+j%n))
			{
				int temp=*(*(q+i/n)+i%n);
				*(*(q+i/n)+i%n)=*(*(q+j/n)+j%n);
				*(*(q+j/n)+j%n)=temp;
			}
		}
	}
}
void huy(int n, int **q)
{
	for(int i=0;i<n;i++)
		delete [] q[i];
	delete [] q;
}
int main()
{
	int n;
	cin>>n>>n;
	int **q = new int* [1000];
	for(int i=0;i<1000;i++)
		*(q+i) = new int [1000];
		nhap(n,q);
		ktra(n,q);
		xuat(n,q);
		huy(n,q);
}
