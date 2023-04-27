#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	
	for(int i=0;i<a.length();i++)		//chuyen string ve chu thuong
	{
		if(a[i]>=65&&a[i]<=90)
			a[i] += 32;
	}
	for(int i=0;i<a.length();i++)		//trim
	{
		while(a[i]==' '&&a[i+1]==' ')
			a.erase(i,1);
		while(a[0]==' '||a.length()-1==' ')
			a.erase(0,1);
	}
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='.'||a[i]=='!'||a[i]=='?'||a[i]==','||a[i]==';'||a[i]==':'&&a[i-1]==' ')
			a.erase(i-1,1);
	}
	
	cout<<a;
}
