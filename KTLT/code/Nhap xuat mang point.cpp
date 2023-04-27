#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *q = new int [n];
	
	for(int i=0;i<n;i++)
	{
		cin>>*(q+i);
	}
	for(int i=0;i<n;i++)
	{
		cout<<*(q+i)<<" ";
	}
}
