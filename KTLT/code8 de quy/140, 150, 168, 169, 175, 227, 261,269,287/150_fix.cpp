#include<bits/stdc++.h>
using namespace std;

int tach_am(vector<int> a, vector<int> &b)
{
	int dem=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]<0)
		{
			dem++;
			b.push_back(a[i]);
		}
	}
	if(dem==0)
		return -1;
}

int min_am(int m, vector<int> b)
{
	if(m==1) return b[0];
	else
	{
		if(b[m-1]>min_am(m-1,b))
			return b[m-1];
		else
			return min_am(m-1,b);
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> a, b;
	
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	if(tach_am(a,b)==-1)
	{
		cout<<"0";
	}
	int m = b.size();
	cout<<min_am(m,b);
}
