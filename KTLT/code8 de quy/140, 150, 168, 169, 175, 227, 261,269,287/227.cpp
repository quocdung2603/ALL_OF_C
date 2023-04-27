#include<bits/stdc++.h>
using namespace std;

int dem=0;

int ktra(int n, vector<int> &a)
{
    if(n==0) return dem;
    if(a[n]*a[n-1]<0)
        dem++;
    return ktra(n-1,a);
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
