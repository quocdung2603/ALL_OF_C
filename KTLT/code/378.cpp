#include<bits/stdc++.h>
using namespace std;

void nhap(int *q, int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>*(q+i);
	}
}
void tach(int n, int *q, int &x, int *p )
{	
	x=0;
	for(int i=0;i<n;i++)
	{
		while(*(q+i)>0)
		{
	 		int dv=*(q+i)%10;
	 		*(p+x)=dv;
	 		x++;
			*(q+i)=*(q+i)/10;
		}
	}

}

void ktra(int *q, int *p, int &x)
{	
	int *a = new int [1000], a1=0;
	for(int i=0;i<9;i++)
	{
		*(a+i)=i;
		a1++;
	}
	int max=0;
	for(int j=0;j<a1;j++)
	{
		int dem=0;
		for(int i=0;i<x;i++)
		{
			if(*(p+i)==*(a+j))
				dem++;
					if(dem>max)
						max=dem;
		}
	}
	cout<<max<<" ";
}

int main()
{
	int n, vt=0, x;
	int *p=new int [1000];
	cin>>n;
	int *q=new int [n];
	nhap(q,n);
	tach(n,q,x,p);
	ktra(q,p,x);
}
