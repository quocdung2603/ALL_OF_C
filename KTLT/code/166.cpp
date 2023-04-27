#include<bits/stdc++.h>
using namespace std;

void nhap(int *q, int n)
{
	for(int i=0;i<n;i++)
		cin>>*(q+i);
}
void xuat(int *q, int n)
{
	for(int i=0;i<n;i++)
		cout<<*(q+i);
}
int dangk(int x)
{	if(x<=1)
		return 0;
	while(x>1)
	{	
		if(x%2!=0)
			return 0;
		x=x/2;
	}
	return 1;
}
int ktra(int *q, int n)
{	int i;
	for( i=0;i<n;i++)
	{
		if(dangk(*(q+i))==1)
			return *(q+i);
	}
}
int main()
{
	int n;
	cin>>n;
	int *q = new int [n];
	nhap(q,n);
	cout<<ktra(q,n);
}
