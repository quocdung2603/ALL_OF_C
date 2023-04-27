#include<bits/stdc++.h>
using namespace std;

 										// 14 -45 23 13 43 -12
										// 0   1  2  3  4   5
										// -12 43 13 23 -45 14
										// 5   4  3  2   1  0
	int sap_xep(int n, vector<int> a)
{
	if(n==1) cout<<"vl";
	while(n==0)
	{
		if(a[n-1]<0) sap_xep(n-1,a);
		if(a[n-1]<sap_xep(n-1,a))
			swap(a[n-1],sap_xep(n-1,a));
		cout<<a[n-1]<<" ";
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
	sap_xep(n,a);
}
