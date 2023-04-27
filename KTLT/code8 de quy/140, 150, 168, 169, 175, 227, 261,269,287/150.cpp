#include<bits/stdc++.h>
using namespace std;

int ktra(int n, int a[])
{
	int dem;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0) dem++;
	}
	if(dem==n)
		return 0;
}


int max(int n, int a[])
{
	if(n==0) return a[0];
	if(a[n]>0) return max(n-1,a);
	if(a[n]>max(n-1,a))
		return a[n];
	else
		return max(n-1,a);
}

int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(ktra(n,a)==0)
	{
		cout<<"0";
		return 0;
	}
	cout<<max(n,a);

}

