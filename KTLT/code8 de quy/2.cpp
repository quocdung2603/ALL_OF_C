#include<bits/stdc++.h>
using namespace std;
long tinhXn(int);
long tinhYn(int);
long tinhXn(int n)
{
	if(n==0)
		return 1;
	return tinhXn(n-1) + tinhYn(n-1);
}

long tinhYn(int n)
{
	if(n==0)
		return 0;
	return 3*tinhXn(n-1) + 2*tinhYn(n-1);
}

int main()
{
	int n=5;
	long kq1 = tinhXn(n);
	long kq2 = tinhYn(n);
	
	cout<<kq1<<" "<<kq2;
	return 0;
}
