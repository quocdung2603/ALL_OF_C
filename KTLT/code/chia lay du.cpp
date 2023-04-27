#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k,a[100000],s=0,t=0;
	long i;
	int count=0;
	cin>>n>>k;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%k!=a[(n-1)-i]%k)
		{
			count++;
		}
		if(a[i]%k==a[(n-1)-i]%k)
		{	
			
		}
	}
	cout<<count;

}
