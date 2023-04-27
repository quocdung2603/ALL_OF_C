#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	int *q= new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>*(q+i);
	}
	for(int i=0;i<n;i++)
	{
		while(n>1)
		{
			if(n%2!=0)
			{
				cout<<"0"; break;
			}
			n=n/2;
			cout<<" "<<n<<" ";
		}
		
	}
}
