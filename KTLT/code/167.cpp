#include<bits/stdc++.h>
using namespace std;

void nhap(int *q, int n)
{
	for(int i=0;i<n;i++)
		cin>>*(q+i);
}
int ktra_le(int n)
{
	int dv;
	while (n!=0)
	{	
		dv=n%10;
		if(dv%2==0)
			return 0;
		n = n/10;	
	}
	return 1;
}
int ktra_first(int *q, int n)
{	
	for(int i=0;i<n;i++)
		if(ktra_le(*(q+i))==1)
			return (*(q+i));
	return 0;
}
void ktra_max(int *q, int n)
{
	int max=ktra_first(q,n);
	for(int i=0;i<n;i++)
	{
		if(ktra_le(*(q+i))==1&&max<*(q+i))
			max=*(q+i);
	}
	cout<<max;
}
int main()
{
	int n;
	cin>>n;
	int *q = new int [n];
	nhap(q,n);
	ktra_max(q,n);
	return 0;
}
