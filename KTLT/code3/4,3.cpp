#include<iostream>
#include<string.h>
using namespace std;

int main()
{	
	int dem=0, dem1=0;
	string n;
	
	getline(cin,n);
	for(int i=0;i<n.length();i++)
	{
		if(n[i]!=' ')
		{
			dem++;
		}
		else
			dem=0;
		dem1=max(dem,dem1);
	}
	cout<<dem1;
}
