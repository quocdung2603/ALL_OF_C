#include<bits/stdc++.h>
using namespace std;


int ktra(int n, vector<int> &a)
{
	if(n==0) return 0;
	if(a[n]%5==0&&a[n]%10==5)
	{
		if(a[n]>ktra(n-1,a))
		{
			return a[n];
		}
		return ktra(n-1,a);
	}
	else
	{
		return ktra(n-1,a);
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}	
	cout<<ktra(n,a);
}




