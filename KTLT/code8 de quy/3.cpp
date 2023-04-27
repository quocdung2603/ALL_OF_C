#include<bits/stdc++.h>
using namespace std;

int so_mu(int a, int n)		// 3 3 3 3	a
							// 1 2 3 4	n
{
	if(n==1) return a;
	if(n==0) return 1;
	return a*so_mu(a,n-1);
}

int main()
{
	int a,n;
	cin>>a>>n;
	cout<<so_mu(a,n);
}
