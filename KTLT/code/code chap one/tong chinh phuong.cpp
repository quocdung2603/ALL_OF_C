#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	int s=0;
	cin>>n;
	int *q = new int [n];
	
	for( i=0;i<n;i++)
	{
		cin>>*(q+i);
	}
	for( i=0;i<n;i++)
	{	int sqr = sqrt(*(q+i));
		if(sqr*sqr==*(q+i))
			cout<<*(q+i)<<" ";
	}
}
