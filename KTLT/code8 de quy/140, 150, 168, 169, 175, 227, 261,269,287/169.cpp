#include<bits/stdc++.h>
using namespace std;



int min_le(int n, vector<int> a)		//tim min so le
{
	if(n==0) return 0;
	if(a[n]%2==0)
		return min_le(n-1,a);
	else
	{
		if(a[n]<a[n-1])
			return a[n];
		else return min_le(n-1,a);
	}
	
}

int main()
{
	vector<int> a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	cout<<min_le(n,a);
}
