#include<bits/stdc++.h>
using namespace std;

int ktra(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

void xuat(int *q, int n)
{
	for(int i=0;i<n;i++)
		if(ktra(*(q+i))==1)
			cout<<*(q+i)<<" ";
}

int main()
{
	int n;
	int s=0;
	cin>>n;
	int *q = new int [n];
	
	for(int i=0;i<n;i++)
	{
		cin>>*(q+i);
	}
	xuat(q,n);
}
