#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void tach(int n, int a[], int b[], int &j)
{	 j=0;
	for(int i=0;i<n;i++)
		while(a[i]>0)
		{
			int dv=a[i]%10;
			b[j]=dv;
			j++;
			a[i]=a[i]/10;
		}
}
void ktra(int a[], int b[], int &j)
{
	for(int i=0;i<j;i++)
	{	
		if(b[i]==b[j-i-1])
			cout<<b[i]<<" ";
	}
}
//	1 2 2 1
//	0 1 2 3
int main()
{
	int n,a[1000],j,b[10000];
	cin>>n;
	nhap(a,n);
	tach(n,a,b,j);
	ktra(a,b,j);
}
