#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string n;
	
	getline(cin,n);
	for(int i=0;i<n.length();i++)
	{
		if(n[i]!=' ')
			cout<<n[i];
	}
}
