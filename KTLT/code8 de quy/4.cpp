#include<bits/stdc++.h>
using namespace std;

int max_value(int n, vector<int> a, int m)
{
	if(m==n) return a[n];
	
	if(a[m]<max_value(n,a,m+1))
		return a[m];
	else
		return max_value(n,a,m+1);
//		x7q4qrv
}

int main()
{
	vector<int> a;
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	max_value(n,a,1);
}
