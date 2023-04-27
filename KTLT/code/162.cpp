#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *q = new int [n];
	
	for(int i=0;i<n;i++)	//nhap
	{
		cin>>*(q+i);
	}
	for(int i=0;i<n;i++)
	{
		if(*(q+i)*(*(q+i+2))==*(q+i+1))
			cout<<*(q+i+1)<<" o vi tri: "<<i+1<<" ";
		if(*(q+i)*(*(q+i+2))!=*(q+i+1))
			cout<<"-1";
			break;
	}
}
