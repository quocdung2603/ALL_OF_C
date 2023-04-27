#include<bits/stdc++.h>
using namespace std;

void nhap(int *q, int n)
{
	for(int i=0;i<n;i++)
		cin>>*(q+i);
}

void ktra(int *q, int n)
{
	
	for(int i=0;i<n;i++)
	{	int count=0;
		for(int j=0;j<n;j++)
		{
			if(*(q+i)==*(q+j))
			{
				if(i <= j)
					count++;
				else
					break;
			}
		}
		if(count!=0)
		{
			cout<<"gia tri "<<*(q+i)<<" xuat hien "<<count<<endl;
		}
	}
}


int main()
{
	int n;
	cin>>n;
	int *q = new int [n];
	nhap(q,n);
	ktra(q,n);
}
