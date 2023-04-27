#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	int z[1000];
	int i;
	for(i=0;i<a.length();i++)
	{
		if(a[i]>=96&&a[i]<=122)
			a[i] -= 32;
	}
	for(i=0;i<a.length();i++)
	{	
		if(a[i]=='M')
			z[i]=1000;
		if(a[i]=='D')
			z[i]=500;
		if(a[i]=='C')
			z[i]=100;
		if(a[i]=='L')
			z[i]=50;				
		if(a[i]=='X')
			z[i]=10;
		if(a[i]=='V')
			z[i]=5;
		if(a[i]=='I')
			z[i]=1;
	}
	int sum=z[a.length()-1];
	for(i=a.length()-1;i>0;i--) 	//duyet nguoc
	{
		if(z[i]>z[i-1])
			sum -= z[i-1];
		else if(z[i]<=z[i-1])
			sum += z[i-1];
	}
	cout<<sum<<" ";
}
