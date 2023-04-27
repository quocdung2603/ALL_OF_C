#include<bits/stdc++.h>
using namespace std;

int dem=0;

int ktra(int n, vector<int> a, vector<int> &b)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			b.push_back(a[i]);
			dem++;
		}
	}
	if(dem==0)
		return -1;
}

int min_duong(int m, vector<int> &b)
{
	if(m==1) return b[0];
	else
	{
		if(b[m-1]<min_duong(m-1,b))
		{
			return b[m-1];
		}
		else
			return min_duong(m-1,b);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> a,b;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a.push_back(t);
	}
	if(ktra(n,a,b)==-1)
		cout<<"-1";
	int m = b.size();
	cout<<min_duong(m,b);
}
