#include<bits/stdc++.h>
using namespace std;

int min_le(int n, vector<int> &a)
{
	if(n==1) return a[1];
	if(a[n-1]%2!=0)
	{
		if(a[n-1]<min_le(n-1,a))
			return a[n-1];
		else
			return min_le(n-1,a);
	}
	else
	{
		return min_le(n-1,a);
	}
}

//void max_chan(int n, vector<int> a, int c)
//{
//	int Max = 0;
//	for(int i=0;i<a.size();i++)
//	{
//		if(a[i]<c)
//		{
//			cout<<a[i];
//		}
//	}
//	cout<<c;
//}

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
	int z;
	z = min_le(n,a);
//	max_chan(n,a,z);
cout<<z;
}
