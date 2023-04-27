#include<iostream>
using namespace std;

int main()
{
	int s;
	int n;
	cin>>n;
	int *q = new int [n];
	
	for(int i=0;i<n;i++)		//tong phan tu am
	{
		cin>>*(q+i);
	}
	for(int i=0;i<n;i++)
	{	
		if(*(q+i)<0)
			s=s+*(q+i);
	}
	cout<<"tong so am la : "<<s;
}
