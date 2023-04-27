#include<bits/stdc++.h>
using namespace std;

void nhi_phan(int n)
{
	if(n==0)
		return;
	else
	{
		int r = n%2;
		nhi_phan(n/2);
		cout<<r;
	}
}

int main()
{
	int n;
	cin>>n;
	nhi_phan(n);
}
