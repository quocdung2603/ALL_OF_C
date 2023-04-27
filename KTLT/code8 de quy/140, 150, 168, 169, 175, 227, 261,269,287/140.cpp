#include<bits/stdc++.h>
using namespace std;

int dem=0;

int min(int n, int a[])
{
	if(a[n]<0) dem++;
	if(dem==n) return -1;
	if(n==1) return a[1];
	if(a[n]>0)
	{
		if(a[n-1]<min(n-1,a))
			return a[n-1];
		else
			return min(n-1,a);
	}
}

int main()
{
	int n, i=1;
	cin>>n;
	int a[1000];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<min(n,a);
}
